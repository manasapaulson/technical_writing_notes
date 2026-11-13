# LaTeX Colours and Figures

## 1. Introducing Colours

LaTeX supports coloured text and other colour features through the `xcolor` package. Add this to the preamble:

```latex
\usepackage{xcolor}
```

### 1.1 Colouring Text

Use `\textcolor{colour}{text}` to change the colour of specific text.

```latex
\textcolor{red}{Red text}
\textcolor{blue}{Blue text}
\textcolor{green}{Green text}
```

Some predefined colours include `red`, `blue`, `green`, `cyan`, `magenta`, `yellow`, `violet`, `teal`, and `brown`.

### 1.2 Colouring Mathematical Expressions

The `\textcolor` command can also be used inside mathematical expressions.

```latex
\[
\textcolor{magenta}{E=mc^2}
\]

\[
\textcolor{orange}{\int_0^1 x^2\,dx}
\]
```

### 1.3 Defining Custom Colours

Use `\definecolor{name}{model}{values}` to create custom colours.

```latex
\definecolor{myblue}{RGB}{10,60,200}
\definecolor{softpink}{HTML}{FFB6C1}
\definecolor{alert}{named}{red!80!black}
```

Common colour models:

- `RGB`: Red, Green and Blue values (0–255).
- `HTML`: Six-digit hexadecimal colour code.
- `rgb`: Red, Green and Blue values between 0 and 1.
- `named`: Uses a predefined colour name or colour mixture.

Example:

```latex
\textcolor{myblue}{Custom Blue}
```

### 1.4 Background Colours and Highlights

- `\colorbox{background colour}{text}`: Adds a coloured background.
- `\fcolorbox{border colour}{background colour}{text}`: Adds both a coloured border and background.

```latex
\colorbox{yellow}{Important highlight!}

\fcolorbox{red}{white}{Critical label}
```

### 1.5 Changing Colour Scope

Use `{\color{blue} text}` to apply a colour only within a group.

```latex
This is normal text.
{\color{blue} This portion is blue.}
The remaining text is normal.
```

Using `\color{gray}` without grouping changes the colour of subsequent text until another colour is specified or the current group ends.

---

## 2. Inserting Images and Figures

To insert external images into a LaTeX document, load the `graphicx` package:

```latex
\usepackage{graphicx}
```

The image file should be available in the project folder (or at the specified path).

### 2.1 Including an Image

Use `\includegraphics{filename}` to insert an image.

```latex
\includegraphics{example.jpg}
```

You can adjust image dimensions using:

```latex
\includegraphics[width=5cm]{example.jpg}
\includegraphics[height=4cm]{example.jpg}
\includegraphics[scale=0.5]{example.jpg}
```

A common way to set image width relative to the text area is:

```latex
\includegraphics[width=0.5\textwidth]{example.jpg}
```

### 2.2 The Figure Environment

The `figure` environment is used to group an image with its caption and label. It also allows LaTeX to position the figure appropriately.

```latex
\begin{figure}[ht]
    \centering
    \includegraphics[width=0.5\textwidth]{example.jpg}
    \caption{A sample figure}
    \label{fig:sample}
\end{figure}
```

**Positioning options:**

- `h` – approximately here.
- `t` – top of the page.
- `b` – bottom of the page.
- `p` – a page containing floats.
- `!` – relaxes some placement restrictions.
- `H` – forces placement at this location; requires `\usepackage{float}`.

These are placement preferences, not absolute guarantees, except for `H`.

### 2.3 Captions and Referencing Figures

- `\caption{...}` adds a figure caption.
- `\label{...}` assigns a reference label.
- `\ref{...}` prints the figure number.

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{example.jpg}
    \caption{A sample figure}
    \label{fig:sample}
\end{figure}

See Figure~\ref{fig:sample} for the result.
```

Place `\label` after `\caption` so that it refers to the correct figure number.

### 2.4 Rotating and Cropping Images

**Rotate an image:**

```latex
\includegraphics[angle=30]{example.jpg}
```

**Crop an image:**

```latex
\includegraphics[trim=20 30 40 50, clip, width=3cm]{example.jpg}
```

The `trim` values specify the amount removed from the **left, bottom, right and top**, respectively. The `clip` option makes the cropped boundaries visible.

**Scale an image:**

```latex
\scalebox{0.5}{\includegraphics{example.jpg}}
```

### 2.5 Multiple Images Side by Side

The `minipage` environment can place images next to each other.

```latex
\begin{figure}[h]
    \centering

    \begin{minipage}{0.45\textwidth}
        \centering
        \includegraphics[width=\linewidth]{imageA.jpg}
        \caption{Image A}
    \end{minipage}
    \quad
    \begin{minipage}{0.45\textwidth}
        \centering
        \includegraphics[width=\linewidth]{imageB.jpg}
        \caption{Image B}
    \end{minipage}

\end{figure}
```

For subfigures with individual sub-captions and one common figure caption, the `subcaption` package is a commonly used option:

```latex
\usepackage{subcaption}
```

Example:

```latex
\begin{figure}[h]
    \centering
    \begin{subfigure}{0.45\textwidth}
        \includegraphics[width=\linewidth]{imageA.jpg}
        \caption{Big}
    \end{subfigure}
    \begin{subfigure}{0.45\textwidth}
        \includegraphics[width=\linewidth]{imageB.jpg}
        \caption{Small}
    \end{subfigure}
    \caption{Comparison of two images}
    \label{fig:comparison}
\end{figure}
```

### 2.6 Landscape Figures

To display a figure on a rotated landscape page, use the `rotating` package.

```latex
\usepackage{rotating}
```

```latex
\begin{sidewaysfigure}
    \centering
    \includegraphics[width=0.7\textwidth]{example.jpg}
    \caption{Landscape figure}
    \label{fig:landscape}
\end{sidewaysfigure}
```

### 2.7 Common Packages

| Package | Purpose |
|---|---|
| `xcolor` | Text, background and custom colours |
| `graphicx` | Inserting, scaling, rotating and cropping images |
| `float` | Provides the `H` placement option |
| `subcaption` | Creating subfigures |
| `rotating` | Rotated figures and tables |

**Important:** Modern LaTeX with `graphicx` generally supports formats such as PDF, PNG and JPEG with pdfLaTeX. EPS is commonly used with traditional LaTeX workflows; supported formats depend on the compiler.