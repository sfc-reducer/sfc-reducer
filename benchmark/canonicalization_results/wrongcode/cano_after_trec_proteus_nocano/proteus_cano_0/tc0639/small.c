int
printf
(
const
char
*
,
...
)
;
char
a
;
void
b
(
char
b
,
void
*
c
,
char
__m128
)
{
a
=
b
;
}
void
c
(
__m128
,
__m128d
)
{
printf
(
"%x"
,
a
)
;
}
char
d
[
]
;
int
f
[
]
[
1
]
;
static
int
*
h
=
&
f
[
1
]
[
0
]
;
int
*
i
(
int
*
,
unsigned
char
)
;
int
*
j
(
)
;
unsigned
k
(
int
*
,
unsigned
,
int
)
;
char
l
(
)
{
unsigned
a
=
1
;
i
(
j
(
k
(
&
a
,
a
,
a
)
)
,
a
)
;
return
a
;
}
int
*
i
(
int
*
a
,
unsigned
char
b
)
{
*
h
=
b
;
return
a
;
}
int
*
j
(
)
{
int
*
a
=
&
f
[
1
]
[
0
]
;
*
d
=
*
a
;
return
a
;
}
unsigned
k
(
int
*
a
,
unsigned
b
,
int
c
)
{
return
*
h
=
b
;
}
int
main
(
)
{
l
(
)
;
b
(
*
d
,
""
,
a
)
;
c
(
a
,
a
)
;
return
0
;
}
