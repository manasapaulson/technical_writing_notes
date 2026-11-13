# Introduction to Doxygen

## 1. What is Doxygen?

Doxygen is an open-source documentation generator used to create documentation directly from source code.

It supports several programming languages, including:
- C
- C++
- Python
- Java

Doxygen extracts information from specially formatted comments in source code and generates reference manuals in formats such as HTML, LaTeX, and PDF.

It is widely used for documenting software libraries, classes, functions, and APIs.

## 2. Why is Documentation Important?

Technical documentation is useful because it:
- Clarifies software requirements and specifications.
- Makes software maintenance easier.
- Helps new developers understand and work with existing code.
- Supports compliance, auditing, and quality control.
- Improves knowledge sharing and collaboration.

## 3. Key Features of Doxygen

- Extracts documentation from source-code comments.
- Documents functions, classes, and modules.
- Generates cross-references between code elements.
- Creates call graphs and inheritance diagrams.
- Supports Markdown, LaTeX formulas, diagrams, and code examples.
- Can be integrated into CI/CD workflows.

## 4. Installing Doxygen

Doxygen can be installed on different operating systems.

**Windows:** Download the installer from https://www.doxygen.nl/download.html

**macOS:**
```bash
brew install doxygen
```

**Linux (Debian/Ubuntu):**
```bash
sudo apt-get install doxygen
```

To check whether Doxygen is installed:

```bash
doxygen --version
```

## 5. Basic Doxygen Workflow

The basic workflow consists of four steps:

1. Write specially formatted comments in the source code.
2. Generate a configuration file.
3. Run Doxygen using the configuration file.
4. Open and browse the generated documentation.

### Step 1: Generate a Configuration File

```bash
doxygen -g Doxyfile
```

This creates a configuration file named `Doxyfile`.

### Step 2: Generate Documentation

```bash
doxygen Doxyfile
```

Doxygen processes the source code and generates the documentation.

### Step 3: View the Output

The generated HTML documentation can be opened using:

```text
html/index.html
```

LaTeX/PDF output can also be generated if enabled in the configuration.

## 6. Doxygen Comment Syntax

Doxygen recognizes specially formatted comments and extracts information from them.

### C/C++/Java Documentation

A common documentation style uses `/** ... */`.

```cpp
/**
 * \brief Brief description of the function.
 *
 * Longer detailed explanation.
 * \param x A parameter description.
 * \return Description of the return value.
 */
int myFunction(int x);
```

### Important Components

- `\brief` – Provides a short description.
- `\param` – Describes a function parameter.
- `\return` – Describes the return value.

## 7. Doxygen for Python

Doxygen can also extract documentation from Python docstrings.

```python
def foo(bar):
    """
    Brief description.
    More details here.

    :param bar: Bar parameter
    :type bar: int
    :return: Computed value
    :rtype: int
    """
    return bar + 1
```

The docstring describes the function, its parameter, and its return value.

## 8. Common Doxygen Tags

| Tag | Purpose |
|---|---|
| `\brief` | Short summary of a function, class, or module. |
| `\param` | Describes a parameter. |
| `\return` | Describes the return value. |
| `\author` | Specifies author information. |
| `\version` | Specifies the version. |
| `\see` | References related items. |
| `\note` | Adds additional notes. |

## 9. Documenting Classes

Doxygen can document classes and their member functions.

```cpp
/**
 * \class Car
 * \brief Represents a car object.
 *
 * Details about the class.
 */
class Car {
public:

    /**
     * \brief Start the engine.
     * \return True if successful.
     */
    bool startEngine();
};
```

The class description explains the purpose of the class, while the member-function description explains its functionality.

## 10. Grouping and Diagrams

Doxygen supports grouping related documentation elements and generating diagrams.

Some features include:

- Logical grouping of related code elements.
- Call graphs showing function relationships.
- Inheritance diagrams showing class relationships.
- Include diagrams showing header dependencies.
- Embedded diagrams using Graphviz and PlantUML directives.
- Markdown and HTML tables and images.

### Enabling Graphviz Diagrams

Set the following option in the `Doxyfile`:

```text
HAVE_DOT = YES
```

Graphviz must also be installed for the diagrams to be generated.

## 11. Doxygen Output Formats

Doxygen can generate documentation in multiple formats.

| Format | Purpose |
|---|---|
| HTML | Interactive documentation for web browsing. |
| LaTeX/PDF | Printable reference manuals. |
| RTF | Rich Text Format documents. |
| XML | Structured documentation data. |
| DocBook | Structured technical documentation. |
| Man Pages | Unix manual-page documentation. |

Output formats can be enabled or disabled in the `Doxyfile`.

```text
GENERATE_HTML = YES
GENERATE_LATEX = YES
GENERATE_RTF = NO
GENERATE_XML = NO
```

## 12. Best Practices for Writing Doxygen Documentation

- Explain the purpose and expected behaviour of functions, not just their parameters.
- Keep brief and detailed descriptions separate.
- Document all public APIs and modules.
- Use a consistent set of documentation tags.
- Keep documentation updated whenever the source code changes.
- Generate documentation as part of continuous integration.

## 13. Doxygen with Version Control

Doxygen can be integrated into a project's version-control workflow.

- Store the `Doxyfile` in the source-code repository.
- Update documentation along with code changes.
- Review documentation changes during code reviews.
- Publish generated documentation using GitHub Pages or an internal wiki.

## 14. Mini Project: Getting Started with Doxygen

A simple practical exercise:

1. Install Doxygen.
2. Select a small C++ or Python codebase.
3. Add Doxygen-style comments to the code.
4. Generate the HTML documentation.
5. Open `html/index.html`.
6. Explore the generated diagrams and cross-references.

## 15. Important Points

- Doxygen automatically generates documentation from source-code comments.
- It supports multiple programming languages.
- The `Doxyfile` controls the documentation-generation settings.
- Special tags such as `\brief`, `\param`, and `\return` structure the documentation.
- Doxygen is particularly useful for API and library documentation.
- Generated documentation can be integrated with version control and CI/CD workflows.

## Further Resources

- [Official Doxygen Website](https://www.doxygen.nl/)
- [Doxygen Manual](https://www.doxygen.nl/manual/)