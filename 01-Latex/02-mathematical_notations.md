# Lecture 2: Introduction to LaTeX – Mathematical Notations, Equations, Arrays, Matrices and Lists

**Course:** Technical Writing  
**Instructor:** Dr. Neeta Nain, MNIT Jaipur

## 1. Inline and Display Mathematics

LaTeX provides two ways to write mathematical expressions:

**Inline mathematics:** Displays an equation within a line of text.

```latex
\( x+y=10 \)
```

**Display mathematics:** Displays an equation separately, centred on the page.

```latex
\[
x+y=10
\]
```

## 2. Mathematical Notations

Common mathematical symbols and their LaTeX commands:

| Notation | LaTeX command |
|---|---|
| Superscript | `x^2` |
| Subscript | `x_i` |
| Greek letters | `\alpha`, `\beta`, `\gamma`, `\delta` |
| Fraction | `\frac{a+b}{c}` |
| Square root | `\sqrt{x}` |
| Cube root | `\sqrt[3]{y}` |
| Summation | `\sum_{i=1}^{n} i` |
| Product | `\prod_{k=1}^{m} k` |
| Integral | `\int_0^\infty e^{-x}\,dx` |
| Less than or equal to | `\leq` |
| Not equal to | `\neq` |
| Intersection | `\cap` |
| Union | `\cup` |
| Subset or equal to | `\subseteq` |

**Note:** Use `{}` to group multiple characters in a subscript or superscript.

Example:

```latex
$a_i^2 + b_j^3$
```

## 3. Numbered Equations

The `equation` environment creates a displayed equation with automatic numbering.

```latex
\begin{equation}
\int_0^1 x^2\,dx = \frac{1}{3}
\end{equation}
```

- `\int` produces the integral symbol.
- `\frac{a}{b}` creates a fraction.
- Equations are automatically numbered when using the `equation` environment.

## 4. Arrays

The `array` environment creates aligned rows and columns, mainly inside mathematical expressions.

Syntax:

```latex
\[
\begin{array}{lcr}
\text{Left} & \text{Center} & \text{Right} \\
a & b & c \\
1 & 2 & 3
\end{array}
\]
```

- `{lcr}` specifies column alignment:
  - `l` – Left aligned
  - `c` – Centre aligned
  - `r` – Right aligned
- `&` separates columns.
- `\\` starts a new row.

### Piecewise Functions Using Arrays

Arrays can represent functions defined differently for different conditions.

```latex
\[
f(x)=\left\{
\begin{array}{ll}
-x, & x<0 \\
0, & x=0 \\
x^2, & x>0
\end{array}
\right.
\]
```

- `\left\{` creates a scalable left curly brace.
- `\right.` indicates that there is no right delimiter.
- Each row represents a condition and its corresponding value.

## 5. Matrices

Matrices are created using matrix environments. Elements are separated using `&`, and rows using `\\`.

### Basic Matrix

```latex
\[
\begin{matrix}
1 & 2 \\
3 & 4
\end{matrix}
\]
```

### Matrices with Different Delimiters

The `amsmath` package provides different matrix environments:

| Environment | Delimiter |
|---|---|
| `matrix` | No brackets |
| `pmatrix` | Parentheses |
| `bmatrix` | Square brackets |
| `Bmatrix` | Curly braces |
| `vmatrix` | Single vertical bars |
| `Vmatrix` | Double vertical bars |

Example:

```latex
\usepackage{amsmath}

\[
\begin{bmatrix}
a & b \\
c & d
\end{bmatrix}
\]
```

### Larger Matrices and Row Spacing

Matrices can have any required number of rows and columns.

Extra vertical spacing between rows can be added using an optional length after `\\`.

```latex
\[
\begin{bmatrix}
1 & 2 & 3 \\[6pt]
4 & 5 & 6 \\[6pt]
7 & 8 & 9
\end{bmatrix}
\]
```

Here, `[6pt]` adds extra spacing after the row.

### Small Matrices

The `smallmatrix` environment creates compact matrices suitable for use within mathematical expressions.

```latex
\[
\left(
\begin{smallmatrix}
a & b \\
c & d
\end{smallmatrix}
\right)
\]
```

## 6. Lists

LaTeX supports three commonly used list environments.

### Unordered List – `itemize`

Creates a bulleted list.

```latex
\begin{itemize}
\item Apples
\item Oranges
\item Bananas
\end{itemize}
```

### Ordered List – `enumerate`

Creates a numbered list.

```latex
\begin{enumerate}
\item First step
\item Second step
\item Third step
\end{enumerate}
```

### Description List – `description`

Creates a list with labelled terms and their descriptions.

```latex
\begin{description}
\item[HTML] HyperText Markup Language
\item[CSS] Cascading Style Sheets
\item[JS] JavaScript
\end{description}
```

## 7. Important Commands at a Glance

| Command / Symbol | Purpose |
|---|---|
| `\( ... \)` | Inline mathematics |
| `\[ ... \]` | Display mathematics |
| `^` | Superscript |
| `_` | Subscript |
| `\frac{}{}` | Fraction |
| `\sqrt{}` | Square root |
| `\sum` | Summation |
| `\prod` | Product |
| `\int` | Integral |
| `\begin{equation}` | Numbered equation |
| `\begin{array}` | Array |
| `\begin{bmatrix}` | Matrix with square brackets |
| `&` | Separates columns |
| `\\` | Starts a new row |
| `\item` | Adds a list item |

---

**End of Lecture 2**