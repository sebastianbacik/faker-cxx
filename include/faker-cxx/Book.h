#pragma once

#include <string>

namespace faker
{
class Book
{
public:
    /**
     * @brief Returns a random book title.
     *
     * @returns Book title.
     *
     * @code
     * Book::title() // "Romeo and Juliet"
     * @endcode
     */
    static std::string title();

    /**
     * @brief Returns a random book genre.
     *
     * @returns Book genre.
     *
     * @code
     * Book::genre() // "Fantasy"
     * @endcode
     */
    static std::string genre();

    /**
     * @brief Returns a random book author.
     *
     * @returns Book author.
     *
     * @code
     * Book::author() // "Shakespeare, William"
     * @endcode
     */
    static std::string author();

    /**
     * @brief Returns a random book publisher.
     *
     * @returns Book publisher.
     *
     * @code
     * Book::publisher() // "Addison-Wesley"
     * @endcode
     */
    static std::string publisher();

    /**
     * @brief Returns a random valid ISBN.
     *
     * @returns Book ISBN.
     *
     * @code
     * Book::isbn() // "9781234567897"
     * @endcode
     */
    static std::string isbn();
};
}
