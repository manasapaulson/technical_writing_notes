# Lecture 1: Introduction to LaTeX

**Course:** Technical Writing  
**Instructor:** Prof. Neeta Nain, MNIT Jaipur

## 1. What is LaTeX?

LaTeX is a document preparation system built on top of TeX. It uses commands and plain-text source files (`.tex`) to create professionally formatted documents.

## 2. Why Use LaTeX?

- Free and portable.
- Produces professional-looking documents.
- Makes mathematical equations easier to write.
- Handles large and complex documents efficiently.
- Supports automatic numbering, tables of contents, references and bibliographies.
- Separates document content from formatting.

LaTeX is particularly useful for technical and academic documents, where formatting and mathematical notation are important.

## 3. LaTeX Tools and Editors

**Offline tools:**
- Windows: MiKTeX, TeXnicCenter, TeXstudio.
- Linux: TeX Live, Kile, TeXstudio.

**Online tools:**
- Overleaf
- Papeeria
- CoCalc

## 4. Input, Output and Compilation

- **Input:** A plain-text `.tex` file containing content and LaTeX commands.
- **Output:** PDF (`.pdf`), DVI (`.dvi`), PostScript (`.ps`) and RTF (`.rtf`).

Common compilation commands:

```bash
pdflatex filename.tex
latex filename.tex
```

- `pdflatex` generates a PDF.
- `latex` traditionally generates a DVI file.

For documents using BibTeX for references, a typical compilation sequence is:

```bash
pdflatex filename
bibtex filename
pdflatex filename
pdflatex filename
```

## 5. Basic Document Structure

A LaTeX document generally has three parts:

```latex
\documentclass{article}

\begin{document}

Hello World!

\end{document}
```

- `\documentclass{}` specifies the document type.
- `\begin{document}` marks the beginning of the content.
- `\end{document}` marks the end.

## 6. Document Classes and Options

The `\documentclass` command defines the overall structure of a document.

**Common classes:**
- `article` – Short documents and papers.
- `report` – Reports and longer documents.
- `book` – Books.
- `letter` – Letters.
- `IEEEtran` and ACM classes – Technical and research publications.

Options can be specified inside square brackets:

```latex
\documentclass[12pt,twocolumn]{article}
```

- `{}` are used for required arguments.
- `[]` are used for optional arguments.

## 7. Titles, Abstracts and Sections

LaTeX provides commands to organise a document:

```latex
\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}

\begin{document}
\maketitle

\begin{abstract}
This is the document abstract.
\end{abstract}

\section{Introduction}
\subsection{Background}
\subsubsection{Overview}

\end{document}
```

- `\maketitle` displays the title, author and date.
- `abstract` contains a brief summary.
- `\section`, `\subsection` and `\subsubsection` organise content into headings.

## 8. Overview of LaTeX Features

LaTeX provides commands and environments for various document elements:

| Feature | Commands / Environment |
|---|---|
| Text formatting | `\emph{}`, font size commands |
| Comments | `%` |
| Paragraph spacing | Blank line |
| Lists | `itemize`, `enumerate`, `description` |
| Mathematical expressions | `$...$`, `equation` |
| Tables | `tabular` |
| Figures | `figure`, `\includegraphics` |
| Cross-references | `\label{}`, `\ref{}` |
| Bibliography | `thebibliography`, `\cite{}` |

These features will be covered in detail in subsequent lectures.

## 9. Important Points

- LaTeX commands begin with a backslash (`\`).
- Commands are case-sensitive.
- Multiple consecutive spaces are treated as a single space.
- A blank line starts a new paragraph.
- `%` is used to write comments; everything after it on that line is ignored.
- Some characters such as `$`, `%`, `&`, `#`, `_`, `{` and `}` have special meanings and need escaping when used as ordinary text.

**Example:**

```latex
50\% of students
```

This displays: 50% of students.

---

**End of Lecture 1**