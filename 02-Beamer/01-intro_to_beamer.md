# Introduction to LaTeX Beamer

## 1. What is Beamer?

Beamer is a LaTeX document class used to create presentations and slides. It allows users to prepare professional presentations using LaTeX commands instead of traditional presentation software.

### Advantages of Beamer
- Produces consistent and professionally formatted slides.
- Supports mathematical equations and technical content.
- Allows the use of themes and customizable layouts.
- Supports images, tables, diagrams, and animations.
- Integrates well with other LaTeX packages.

## 2. Basic Structure of a Beamer Document

A basic Beamer presentation follows this structure:

```latex
\documentclass{beamer}

\title{My Presentation}
\author{Author Name}
\institute{Institution Name}
\date{\today}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{Introduction}
    This is my first slide.
\end{frame}

\end{document}
```

### Important Commands

| Command | Purpose |
|---|---|
| `\documentclass{beamer}` | Defines the document as a presentation. |
| `\title{}` | Sets the presentation title. |
| `\author{}` | Specifies the author. |
| `\institute{}` | Specifies the institution. |
| `\date{}` | Sets the presentation date. |
| `\begin{document}` | Starts the presentation. |
| `\begin{frame}` | Starts a new slide. |
| `\titlepage` | Generates the title slide. |
| `\end{frame}` | Ends a slide. |

## 3. Frames and Slides

In Beamer, each slide is created using the `frame` environment.

```latex
\begin{frame}{Slide Title}
    Slide content goes here.
\end{frame}
```

A presentation can contain multiple frames.

```latex
\begin{frame}{First Slide}
    Introduction to the topic.
\end{frame}

\begin{frame}{Second Slide}
    More information.
\end{frame}
```

## 4. Themes

Beamer provides predefined themes that control the overall appearance of a presentation.

```latex
\usetheme{Madrid}
```

Some commonly used themes include:

- Madrid
- Berlin
- Copenhagen
- CambridgeUS
- Warsaw
- Singapore
- AnnArbor

Themes can be changed by replacing the theme name.

## 5. Colour Themes

Colour themes control the colour scheme of the presentation.

```latex
\usecolortheme{dolphin}
```

Other examples include:
- `seahorse`
- `beaver`
- `orchid`
- `whale`

## 6. Text Formatting

LaTeX formatting commands can also be used in Beamer.

```latex
\textbf{Bold Text}

\textit{Italic Text}

\underline{Underlined Text}
```

Text size can be changed using:

```latex
{\small Small Text}

{\large Large Text}

{\Huge Very Large Text}
```

## 7. Lists

Beamer supports both unordered and ordered lists.

### Unordered List

```latex
\begin{itemize}
    \item First point
    \item Second point
    \item Third point
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
    \item First step
    \item Second step
    \item Third step
\end{enumerate}
```

## 8. Columns

The `columns` environment allows content to be arranged side by side.

```latex
\begin{frame}{Two Columns}

\begin{columns}

\column{0.5\textwidth}
Left column content.

\column{0.5\textwidth}
Right column content.

\end{columns}

\end{frame}
```

The width of each column can be adjusted.

## 9. Creating a Table of Contents

The `\tableofcontents` command displays the sections of a presentation.

```latex
\begin{frame}{Contents}
    \tableofcontents
\end{frame}
```

Sections can be defined using:

```latex
\section{Introduction}

\section{Methodology}

\section{Conclusion}
```

## 10. Important Points

- Beamer presentations use the `beamer` document class.
- Each slide is created using the `frame` environment.
- Themes control the overall appearance of slides.
- Standard LaTeX commands can be used for formatting.
- The `columns` environment helps organize slide content.
- Sections can be used to structure longer presentations.