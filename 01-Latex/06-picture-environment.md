# LaTeX Picture Environment

## 1. Introduction

The `picture` environment allows you to create drawings directly in LaTeX using coordinates and commands.

It can be used to draw:
- Lines and arrows
- Circles and ovals
- Rectangular and dashed boxes
- Text at specific positions
- Curves and repeated patterns
- Simple diagrams and graphs

### 1.1 Basic Syntax

```latex
\begin{picture}(width,height)(x-offset,y-offset)
    % Picture commands
\end{picture}
```

- `width` and `height` specify the nominal dimensions of the picture.
- `x-offset` and `y-offset` optionally shift the origin.
- The default origin is the lower-left corner.
- Coordinates are measured in multiples of `\unitlength`.

### 1.2 Setting the Unit Length

Use `\setlength{\unitlength}{value}` to set the size of one coordinate unit.

```latex
\setlength{\unitlength}{1cm}
```

For example, if `\unitlength` is `1cm`, then coordinate `(2,3)` represents a position 2 cm horizontally and 3 cm vertically from the origin.

Common length units:

| Unit | Meaning |
|---|---|
| `in` | Inches |
| `mm` | Millimetres |
| `cm` | Centimetres |
| `pt` | Points (approximately 1/72 inch) |
| `em` | Approximately the width of M in the current font |
| `ex` | Approximately the height of x in the current font |

Set `\unitlength` before beginning the picture environment.

---

## 2. Placing Objects: `\put`

The `\put` command places an object at a specified coordinate.

```latex
\put(x-coordinate,y-coordinate){object}
```

Example:

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(5,3)
    \put(2,1){Hello}
    \put(3,2){World}
\end{picture}
```

The reference point of the object is placed at the given coordinate.

---

## 3. Drawing Lines and Arrows

### 3.1 The `\line` Command

Syntax:

```latex
\line(x-slope,y-slope){length}
```

The slope determines the direction of the line.

Examples:

```latex
\put(0,0){\line(1,0){4}}  % Horizontal line
\put(0,0){\line(0,1){3}}  % Vertical line
\put(0,0){\line(1,1){3}}  % Diagonal line
```

The slope values must be relatively prime integers with absolute values no greater than 6.

The length generally specifies the horizontal extent; for a vertical line, it specifies the vertical height.

### 3.2 The `\vector` Command

Syntax:

```latex
\vector(x-slope,y-slope){length}
```

It draws an arrow in the specified direction.

```latex
\put(0,0){\vector(1,0){4}}  % Right arrow
\put(0,0){\vector(0,1){3}}  % Upward arrow
\put(0,0){\vector(1,1){3}}  % Diagonal arrow
```

The slope values must be relatively prime integers with absolute values no greater than 4.

### 3.3 Changing Line Thickness

Use `\linethickness{dimension}` to change the thickness of horizontal and vertical lines.

```latex
\linethickness{1pt}
```

The `\thicklines` and `\thinlines` commands can also be used to select standard line thicknesses.

---

## 4. Drawing Circles and Ovals

### 4.1 Circles

Syntax:

```latex
\circle{diameter}
```

Example:

```latex
\put(2,2){\circle{1}}
```

A filled circle (disk) can be drawn using:

```latex
\put(2,2){\circle*{0.6}}
```

The coordinate specifies the centre of the circle.

### 4.2 Ovals

Syntax:

```latex
\oval(width,height)[portion]
```

Example:

```latex
\put(2,2){\oval(3,2)}
```

The optional portion argument selects a part of the oval:

- `t` – top
- `b` – bottom
- `l` – left
- `r` – right

---

## 5. Boxes and Text Positioning

### 5.1 The `\framebox` Command

Creates a rectangular box with text inside.

Within the `picture` environment:

```latex
\put(1,1){\framebox(3,1)[c]{Hello}}
```

Syntax:

```latex
\framebox(width,height)[position]{text}
```

Position options:
- `c` – centre
- `l` – left
- `r` – right
- `t` – top
- `b` – bottom

The position options can be combined, such as `[tl]` for top-left.

### 5.2 The `\makebox` Command

Creates an invisible box for positioning text.

```latex
\put(2,1){\makebox(0,0)[c]{Centre}}
\put(4,1){\makebox(0,0)[l]{Left}}
\put(6,1){\makebox(0,0)[r]{Right}}
```

Unlike `\framebox`, `\makebox` does not draw a border.

### 5.3 The `\dashbox` Command

Creates a dashed rectangular box.

```latex
\put(1,1){\dashbox{0.2}(3,1){Dashed Box}}
```

Syntax:

```latex
\dashbox{dash-length}(width,height){text}
```

The dash length determines the length of each dash.

### 5.4 The `\frame` Command

Places a rectangular frame around an object.

```latex
\put(1,1){\frame{Hello}}
```

---

## 6. Stacking Text

The `\shortstack` command places multiple lines of text inside a vertical stack.

```latex
\put(2,2){
    \shortstack{First line\\Second line\\Third line}
}
```

Alignment options:
- `c` – centre (default)
- `l` – left
- `r` – right

Example:

```latex
\shortstack[l]{Gnats\\and\\gnus}
```

---

## 7. Drawing Curves

The `\qbezier` command draws a quadratic Bézier curve using three points:

```latex
\qbezier(x1,y1)(x2,y2)(x3,y3)
```

- First point: Starting point
- Second point: Control point
- Third point: Ending point

Example:

```latex
\setlength{\unitlength}{0.1cm}

\begin{picture}(30,20)
    \qbezier(5,5)(15,25)(25,5)
\end{picture}
```

The control point determines the shape and curvature of the curve.

---

## 8. Repeated Patterns: `\multiput`

The `\multiput` command places multiple copies of the same object at regular intervals.

Syntax:

```latex
\multiput(x,y)(delta-x,delta-y){number}{object}
```

- `(x,y)` – starting position
- `(delta-x,delta-y)` – displacement between copies
- `number` – number of copies
- `object` – object to repeat

Example:

```latex
\setlength{\unitlength}{1cm}

\begin{picture}(6,2)
    \multiput(1,1)(1,0){5}{\circle*{0.2}}
\end{picture}
```

This creates five filled circles in a horizontal row.

---

## 9. Example: Drawing Coordinate Axes and a Circle

```latex
\setlength{\unitlength}{0.5in}

\begin{picture}(10,10)(-5,5)
    \linethickness{1pt}

    \put(-2.5,0){\vector(1,0){5}}
    \put(0,-2.5){\vector(0,1){5}}

    \put(0,0){\circle{2}}
\end{picture}
```

This draws:
- Horizontal x-axis
- Vertical y-axis
- A circle centred at the origin

The optional offset `(-5,5)` changes the picture's origin.

---

## 10. Example: Drawing a Right Triangle

```latex
\setlength{\unitlength}{0.4in}

\begin{picture}(7,5)
    \linethickness{1pt}

    \put(0,0){\line(1,0){4}}
    \put(4,0){\line(0,1){3}}
    \put(0,0){\line(4,3){4}}

    \put(2,-0.25){\makebox(0,0){$\alpha$}}
    \put(4.25,1.5){\makebox(0,0){$\beta$}}
    \put(2,2){\makebox(0,0){$\gamma$}}
\end{picture}
```

This creates a right triangle and places the angle labels using `\makebox`.

---

## 11. Example: Drawing a Block Diagram

The `picture` environment can also be used to create simple block diagrams.

```latex
\begin{figure}[h]
    \setlength{\unitlength}{0.14in}
    \centering

    \begin{picture}(32,15)

        \put(3,4){\framebox(6,3){$H_B(q)$}}
        \put(13,4){\framebox(6,3){$N[\cdot]$}}
        \put(23,4){\framebox(6,3){$H_C(q)$}}

        \put(0,5.5){\vector(1,0){3}}
        \put(9,5.5){\vector(1,0){4}}
        \put(19,5.5){\vector(1,0){4}}
        \put(29,5.5){\vector(1,0){3}}

        \put(-1,6.5){$u(k)$}
        \put(9.5,6.5){$x_B(k)$}
        \put(19.5,6.5){$x_C(k)$}
        \put(30,6.5){$y(k)$}

    \end{picture}

    \caption{An LNL Block Oriented Model Structure}
    \label{fig:lnlblock}
\end{figure}
```

Refer to the diagram in the text using:

```latex
See Figure~\ref{fig:lnlblock}.
```

---

## 12. Quick Reference

| Command | Purpose |
|---|---|
| `\setlength{\unitlength}{...}` | Sets coordinate unit |
| `\put(x,y){object}` | Places an object |
| `\line(x,y){length}` | Draws a line |
| `\vector(x,y){length}` | Draws an arrow |
| `\circle{diameter}` | Draws an empty circle |
| `\circle*{diameter}` | Draws a filled circle |
| `\oval(width,height)` | Draws an oval |
| `\framebox(width,height){text}` | Draws a box with text |
| `\makebox(width,height){text}` | Positions text without a border |
| `\dashbox{dash}(width,height){text}` | Draws a dashed box |
| `\shortstack{...}` | Stacks multiple lines |
| `\qbezier(...)` | Draws a quadratic Bézier curve |
| `\multiput(...)` | Repeats an object |

**Important:** The `picture` environment is useful for simple diagrams. For complex illustrations, graphs or imported images, external drawing tools and the `graphicx` package are generally more convenient.