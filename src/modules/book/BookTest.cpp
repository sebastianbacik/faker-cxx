#include "faker-cxx/Book.h"

#include <algorithm>

#include "gtest/gtest.h"

#include "../../common/StringHelper.h"
#include "data/Authors.h"
#include "data/Genres.h"
#include "data/Publishers.h"
#include "data/Titles.h"

using namespace ::testing;
using namespace faker;

class BookTest : public Test
{
public:
};

TEST_F(BookTest, shouldGenerateTitle)
{
    const auto bookTitle = Book::title();

    ASSERT_TRUE(std::ranges::any_of(titles, [bookTitle](const std::string& title) { return title == bookTitle; }));
}

TEST_F(BookTest, shouldGenerateGenre)
{
    const auto bookGenre = Book::genre();

    ASSERT_TRUE(std::ranges::any_of(genres, [bookGenre](const std::string& genre) { return genre == bookGenre; }));
}

TEST_F(BookTest, shouldGenerateAuthor)
{
    const auto bookAuthor = Book::author();

    ASSERT_TRUE(std::ranges::any_of(authors, [bookAuthor](const std::string& author) { return author == bookAuthor; }));
}

TEST_F(BookTest, shouldGeneratePublisher)
{
    const auto bookPublisher = Book::publisher();

    ASSERT_TRUE(std::ranges::any_of(publishers, [bookPublisher](const std::string& publisher)
                                    { return publisher == bookPublisher; }));
}

TEST_F(BookTest, shouldGenerateIsbn)
{
    const auto generatedIsbn13 = Book::isbn();

    int sum = 0;
    for (size_t i = 0; i < 13; i++)
    {
        if (i % 2 == 0)
        {
            sum += (generatedIsbn13[i] - '0');
        }
        else
        {
            sum += 3 * (generatedIsbn13[i] - '0');
        }
    }

    ASSERT_EQ(generatedIsbn13.size(), 13);
    ASSERT_TRUE(sum % 10 == 0);
}
