# Lecture 3: LaTeX Math Constructs – Exploring Math Display Styles

**Course:** Technical Writing  
**Instructor:** Dr. Neeta Nain, MNIT Jaipur  
**Date:** August 3, 2025

## 1. Inline and Display Mathematics

LaTeX supports two ways of displaying mathematical expressions.

**Inline mathematics:** Displays equations within a line of text.

```latex
\( x+y=10 \)
```

**Display mathematics:** Displays equations separately, centred on the page.

```latex
\[
x+y=10
\]
```

Another way to write display equations is:

```latex
\begin{displaymath}
x+y=10
\end{displaymath}
```

**Packages commonly used for mathematical formatting:**

```latex
\usepackage{amsmath, amssymb}
```

- `amsmath` provides advanced mathematical environments.
- `amssymb` provides additional mathematical symbols.

## 2. Mathematical Fonts

LaTeX supports different font styles for mathematical expressions.

| Command | Purpose |
|---|---|
| `\mathcal{ABC}` | Calligraphic letters |
| `\mathfrak{ABC}` | Fraktur (Gothic) letters |
| `\mathbb{R}` | Blackboard bold letters |
| `\mathrm{ABC}` | Roman/upright text |
| `\mathnormal{ABC}` | Normal mathematical font |
| `\mathit{ABC}` | Italic text |
| `\mathbf{ABC}` | Bold text |
| `\mathsf{ABC}` | Sans-serif text |
| `\mathtt{ABC}` | Monospace text |

Example:

```latex
\[
\mathcal{R} \quad \mathfrak{R} \quad \mathbb{R}
\]
```

## 3. Relations, Operators and Symbols

Some additional mathematical symbols include:

| Category | Commands | Output |
|---|---|---|
| Greek letters | `\alpha`, `\beta`, `\rho`, `\sigma` | α, β, ρ, σ |
| Binary operators | `\times`, `\otimes`, `\oplus` | ×, ⊗, ⊕ |
| Set relations | `\subset`, `\supset`, `\subseteq` | ⊂, ⊃, ⊆ |
| Set operators | `\cup`, `\cap` | ∪, ∩ |
| Other operators | `\int`, `\oint`, `\sum`, `\prod` | ∫, ∮, ∑, ∏ |

## 4. Overbrace and Underbrace

These commands add braces or brackets above or below an expression to label or group its parts.

**Overbrace:**

```latex
\[
\overbrace{a+b+c}^{d}
\]
```

**Underbrace:**

```latex
\[
\underbrace{a+b+c}_{d}
\]
```

- `\overbrace{expression}^{label}` places a brace above the expression.
- `\underbrace{expression}_{label}` places a brace below the expression.
- `\overbracket` and `\underbracket` can be used to create brackets instead of braces.

## 5. Binomial Coefficients

The `\binom{n}{k}` command creates a binomial coefficient.

```latex
\[
\binom{n}{k} = \frac{n!}{k!(n-k)!}
\]
```

It represents the number of ways to choose `k` items from `n` items.

## 6. Numbered Equations

The `equation` environment automatically numbers displayed equations.

```latex
\begin{equation}
\int_0^1 x^2\,dx = \frac{1}{3}
\end{equation}
```

The `equation*` environment (provided by `amsmath`) displays an equation without numbering.

## 7. Long Equations – Multline

For equations that are too long to fit on one line, the `multline` environment splits them across multiple lines.

```latex
\begin{multline*}
p(x) = 3x^6 + 14x^5y + 590x^4y^2 \\
+ 19x^3y^3 - 12x^2y^4 - 12xy^5
\end{multline*}
```

- `\\` indicates where the equation should break.
- The first line is left-aligned and the last line is right-aligned.
- `multline*` produces an unnumbered equation; use `multline` for automatic numbering.

## 8. Splitting and Aligning Equations – Align

The `align` environment is used to arrange multiple equations or align parts of equations.

```latex
\begin{align*}
2x - 5y &= 8 \\
3x + 9y &= -12
\end{align*}
```

- `&` specifies the alignment point.
- `\\` starts a new line.
- `align*` produces unnumbered equations.
- `align` produces numbered equations.

## 9. Grouping and Centring Equations – Gather

The `gather` environment displays multiple equations centred individually.

```latex
\begin{gather*}
2x - 5y = 8 \\
3x^2 + 9y = 3a + c
\end{gather*}
```

- `gather*` displays equations without numbering.
- `gather` automatically numbers each equation.

## 10. Other Mathematical Constructs

The following constructs were also demonstrated in this lecture:

- **Arrays:** Used to align mathematical expressions in rows and columns.
- **Piecewise functions:** Use `array` with `\left\{` and `\right.` to display functions with multiple conditions.
- **Matrices:** Use `matrix`, `pmatrix`, `bmatrix`, `Bmatrix`, `vmatrix` and `Vmatrix`.
- **Small matrices:** Use `smallmatrix` for compact matrices.
- **Lists:** Use `itemize`, `enumerate` and `description` for unordered, ordered and descriptive lists.

These constructs were covered in detail in Lecture 2.

---

## 11. Important Commands at a Glance

| Command / Environment | Purpose |
|---|---|
| `\mathcal{}` | Calligraphic font |
| `\mathfrak{}` | Fraktur font |
| `\mathbb{}` | Blackboard bold font |
| `\mathrm{}` | Roman font |
| `\mathbf{}` | Bold font |
| `\overbrace{}^{}` | Brace above expression |
| `\underbrace{}_{}` | Brace below expression |
| `\binom{}{}` | Binomial coefficient |
| `equation` | Numbered equation |
| `equation*` | Unnumbered equation |
| `multline` | Split long equations |
| `align` | Align multiple equations |
| `gather` | Centre multiple equations |
| `&` | Alignment point |
| `\\` | Line break |

**Note:** The starred versions (`*`) of mathematical environments generally suppress automatic equation numbering.

---

**End of Lecture 3**