struct
a
{
char
__m128
;
char
a
;
}
;
struct
b
{
void
;
}
;
struct
c
{
char
__m128
;
struct
a
a
;
}
;
char
*
a
;
struct
c
b
;
struct
b
c
;
int
d
(
short
,
short
,
unsigned
)
;
struct
b
e
(
int
*
,
unsigned
,
int
*
,
unsigned
char
*
)
;
void
*
f
(
)
{
void
*
e
[
]
[
9
]
=
{
{
0
,
&
a
,
0
,
&
a
,
0
,
0
,
&
a
,
0
,
d
}
,
{
0
,
0
,
&
a
,
&
a
,
&
a
,
&
a
,
&
a
,
&
a
,
d
}
,
{
0
,
&
a
,
&
a
,
&
a
,
&
a
,
&
a
,
&
a
,
&
a
,
&
b
.
a
}
}
;
void
*
*
b
=
a
;
*
b
=
e
[
2
]
[
8
]
;
d
(
1
,
*
a
,
*
a
)
;
&
e
[
4
]
[
1
]
;
return
a
;
}
int
d
(
short
__m128
,
short
__m128d
,
unsigned
a
)
{
int
b
=
1
;
e
(
d
,
a
,
&
a
,
d
)
;
return
a
;
}
struct
b
e
(
int
*
a
,
unsigned
d
,
int
*
e
,
unsigned
char
*
f
)
{
while
(
b
.
a
.
a
)
;
return
c
;
}
