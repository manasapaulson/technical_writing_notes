# Beamer Presentations and Advanced Features

## 1. Adding Images

The `graphicx` package is used to insert images into Beamer slides.

```latex
\usepackage{graphicx}
```

Use `\includegraphics` to insert an image.

```latex
\begin{frame}{Adding Images}
    \centering
    \includegraphics[width=0.7\textwidth]{image.png}
\end{frame}
```

### Common Options

| Option | Purpose |
|---|---|
| `width` | Sets image width. |
| `height` | Sets image height. |
| `scale` | Resizes the image by a factor. |
| `angle` | Rotates the image. |

## 2. Adding Tables

Tables can be created using the standard LaTeX `tabular` environment.

```latex
\begin{frame}{Student Details}

\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Aman & 90 \\
Riya & 85 \\
\hline
\end{tabular}

\end{frame}
```

The same table formatting commands used in regular LaTeX documents can be used in Beamer.

## 3. Mathematical Equations

Beamer supports mathematical expressions and equations.

### Inline Mathematics

```latex
The equation is \(a^2+b^2=c^2\).
```

### Display Mathematics

```latex
\[
E = mc^2
\]
```

### Numbered Equation

```latex
\begin{equation}
    E = mc^2
\end{equation}
```

Packages such as `amsmath` can be included for advanced mathematical formatting.

## 4. Blocks

Blocks are used to highlight important information on a slide.

### Normal Block

```latex
\begin{block}{Definition}
    A block of important information.
\end{block}
```

### Alert Block

```latex
\begin{alertblock}{Warning}
    This is an important warning.
\end{alertblock}
```

### Example Block

```latex
\begin{exampleblock}{Example}
    This is an example.
\end{exampleblock}
```

## 5. Overlays and Incremental Content

Overlays allow content to appear gradually instead of displaying everything at once.

### Using `\pause`

```latex
\begin{frame}{Gradual Display}

First point.

\pause

Second point.

\pause

Third point.

\end{frame}
```

Each `\pause` creates another overlay in which additional content becomes visible.

### Using `\item` with Overlay Specifications

```latex
\begin{frame}{Important Points}

\begin{itemize}
    \item<1-> First point
    \item<2-> Second point
    \item<3-> Third point
\end{itemize}

\end{frame}
```

The numbers specify the overlay on which each item first appears. The `-` means the item remains visible on subsequent overlays.

### Using `\only`

```latex
\only<1>{Content on first overlay}

\only<2>{Content on second overlay}
```

Content inside `\only` is displayed only on the specified overlay.

### Using `\uncover`

```latex
\uncover<2->{This content appears from overlay 2 onwards.}
```

Unlike `\only`, `\uncover` reserves space for content even when it is hidden.

## 6. Highlighting Text

The `\alert{}` command highlights important text using the presentation's alert colour.

```latex
\begin{frame}{Important Information}
    This is normal text.

    \alert{This is highlighted text.}
\end{frame}
```

## 7. Hyperlinks and Navigation

The `\href` command can be used to add clickable links.

```latex
\href{https://www.example.com}{Visit Website}
```

A clickable button can also be created using:

```latex
\beamerbutton{Click Here}
```

Beamer also provides navigation symbols and navigation bars through its themes.

To hide navigation symbols:

```latex
\setbeamertemplate{navigation symbols}{}
```

## 8. Customizing Footers

A footer can display information such as the author's name, presentation title, or slide number.

For example, to display slide numbers:

```latex
\setbeamertemplate{footline}[frame number]
```

To remove the headline:

```latex
\setbeamertemplate{headline}{}
```

## 9. References and Bibliography

Beamer supports references and bibliography in the same way as regular LaTeX documents.

A simple example:

```latex
\begin{frame}{References}

\begin{thebibliography}{9}

\bibitem{latex}
Leslie Lamport,
\textit{LaTeX: A Document Preparation System}.

\end{thebibliography}

\end{frame}
```

## 10. Compilation

A Beamer presentation can be compiled using LaTeX editors such as:

- Overleaf
- TeXstudio
- VS Code with LaTeX Workshop

The output is generally a PDF presentation, with each frame represented as a slide.

## 11. Quick Reference

| Command | Purpose |
|---|---|
| `\includegraphics` | Inserts images. |
| `columns` | Arranges content in columns. |
| `block` | Highlights information. |
| `alertblock` | Highlights warnings or important content. |
| `exampleblock` | Displays examples. |
| `\pause` | Reveals content gradually. |
| `\only` | Displays content on specified overlays. |
| `\uncover` | Reveals content while reserving space. |
| `\alert` | Highlights text. |
| `\href` | Adds hyperlinks. |
| `\tableofcontents` | Displays the table of contents. |

## 12. Important Points

- Beamer uses standard LaTeX syntax along with presentation-specific commands.
- Images, tables, and equations can be added directly to slides.
- Blocks help organize and highlight information.
- Overlays make presentations more interactive.
- Themes and templates can be customized to suit presentation requirements.