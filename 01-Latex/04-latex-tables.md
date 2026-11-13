# Lecture 4: LaTeX Tables – Exploring Table Styles

**Course:** Technical Writing  
**Instructor:** Dr. Neeta Nain, MNIT Jaipur

## 1. Creating a Simple Table

The `tabular` environment is used to create tables in LaTeX.

```latex
\begin{center}
\begin{tabular}{|c|c|c|}
\hline
a & b & c \\
a & b & c \\
a & b & c \\
\hline
\end{tabular}
\end{center}
```

**Important commands:**
- `tabular` – Creates the table.
- `c` – Centres the column contents.
- `l` – Left-aligns the column.
- `r` – Right-aligns the column.
- `|` – Adds vertical borders.
- `&` – Separates columns.
- `\\` – Starts a new row.
- `\hline` – Adds a horizontal border.

Column alignment and borders are specified inside `{}` after `\begin{tabular}`.

## 2. Combining Columns – Multicolumn

The `\multicolumn` command combines multiple columns into one cell.

**Syntax:**

```latex
\multicolumn{number of columns}{alignment}{content}
```

Example:

```latex
\begin{tabular}{|p{1.5cm}|p{1.5cm}|p{1.5cm}|}
\hline
\multicolumn{3}{|c|}{Books} \\ \hline
Food name & Author & Publication \\ \hline
Book1 & Author1 & P1 \\
Book1 & Author2 & P2 \\
Book1 & Author3 & P3 \\ \hline
\end{tabular}
```

Here, `\multicolumn{3}{|c|}{Books}` combines three columns and centres the heading.

## 3. Combining Rows – Multirow

The `\multirow` command combines multiple rows into a single cell.

It requires the `multirow` package:

```latex
\usepackage{multirow}
```

**Syntax:**

```latex
\multirow{number of rows}{width}{content}
```

Example:

```latex
\begin{center}
\begin{tabular}{|c|c|c|}
\hline
col1 & col2 & col3 \\
\hline
\multirow{3}{4em}{Multiple row} & cell2 & cell3 \\
& cell5 & cell6 \\
& cell8 & cell9 \\
\hline
\end{tabular}
\end{center}
```

- `3` – Number of rows to combine.
- `4em` – Width of the cell.
- `Multiple row` – Content displayed in the merged cell.
- Empty first-column entries in the following rows indicate that the cell is already occupied by the multirow cell.

## 4. Table Positioning

The `table` environment is a floating environment that allows LaTeX to position tables appropriately in a document.

Example:

```latex
\begin{table}[h!]
\centering
\begin{tabular}{|c|c|c|c|}
\hline
Col1 & Col2 & Col3 & Col4 \\[0.5ex]
\hline
1 & 6 & 87837 & 787 \\
2 & 545 & 18744 & 7560 \\
3 & 88 & 788 & 6344 \\[1ex]
\hline
\end{tabular}
\end{table}
```

**Table positioning parameters:**

| Parameter | Meaning |
|---|---|
| `h` | Here, approximately at the current position |
| `t` | Top of the page |
| `b` | Bottom of the page |
| `p` | Special page for floats |
| `!` | Relaxes certain internal placement restrictions |
| `H` | Places the table precisely at that location |

The `H` option requires:

```latex
\usepackage{float}
```

## 5. Table Captions, Labels and Referencing

Captions provide titles for tables, while labels allow tables to be referenced elsewhere in the document.

Example:

```latex
\begin{table}[h!]
\centering
\begin{tabular}{|c|c|c|}
\hline
Col1 & Col2 & Col3 \\
\hline
1 & 6 & 87837 \\
2 & 545 & 18744 \\
3 & 88 & 788 \\
\hline
\end{tabular}

\caption{Table to test captions and labels}
\label{table:1}
\end{table}
```

To refer to this table in the document:

```latex
Table \ref{table:1} is an example of a referenced LaTeX element.
```

**Important commands:**
- `\caption{}` – Adds a table caption.
- `\label{}` – Assigns a unique reference name.
- `\ref{}` – Displays the table number.

Place `\label` after `\caption` so that it refers to the correct table number.

## 6. Changing Table Size and Spacing

LaTeX provides commands to customise table borders, cell spacing and row height.

| Command | Purpose |
|---|---|
| `\setlength{\arrayrulewidth}{0.5mm}` | Sets the thickness of table borders |
| `\setlength{\tabcolsep}{18pt}` | Sets horizontal padding on either side of cell contents |
| `\renewcommand{\arraystretch}{1.5}` | Increases row height to 1.5 times the default |

Example:

```latex
\setlength{\arrayrulewidth}{0.5mm}
\setlength{\tabcolsep}{18pt}
\renewcommand{\arraystretch}{1.5}
```

These settings can be applied before the table to change its appearance.

## 7. Adding Colours to Tables

The `colortbl` package is used to add colours to table cells, rows and columns.

Add this package in the preamble:

```latex
\usepackage{colortbl}
```

**Important commands:**

| Command | Purpose |
|---|---|
| `\rowcolor{color}` | Colours an entire row |
| `\columncolor{color}` | Colours a column |
| `\cellcolor{color}` | Colours an individual cell |

Example:

```latex
\begin{table}[h]
\begin{tabular}{|>{\columncolor{red}}p{1.5cm}|p{1.5cm}|p{1.5cm}|}
\hline
\rowcolor{green}
\multicolumn{3}{|c|}{Country List} \\ \hline
Country & ALPHA & BETA \\ \hline
Afghanistan & AF & \cellcolor{yellow}AFG \\
\rowcolor{blue}
Albania & AL & ALB \\ \hline
\end{tabular}
\end{table}
```

- `\rowcolor{green}` colours the row green.
- `\columncolor{red}` colours the specified column red.
- `\cellcolor{yellow}` colours an individual cell yellow.

For the `>{\columncolor{...}}` syntax, include:

```latex
\usepackage{array}
```

## 8. Important Commands at a Glance

| Command | Purpose |
|---|---|
| `tabular` | Creates a table |
| `\hline` | Horizontal border |
| `&` | Separates columns |
| `\\` | Starts a new row |
| `\multicolumn{}{ }{}` | Combines columns |
| `\multirow{}{ }{}` | Combines rows |
| `\centering` | Centres a table |
| `\caption{}` | Adds a caption |
| `\label{}` | Assigns a label |
| `\ref{}` | References a table |
| `\arrayrulewidth` | Controls border thickness |
| `\tabcolsep` | Controls horizontal cell padding |
| `\arraystretch` | Controls row height |
| `\rowcolor{}` | Colours a row |
| `\columncolor{}` | Colours a column |
| `\cellcolor{}` | Colours a cell |

---

**Packages used in this lecture:**

```latex
\usepackage{multirow}
\usepackage{array}
\usepackage{colortbl}
\usepackage{float}
```

**End of Lecture 4**