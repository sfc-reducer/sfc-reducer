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
int
a
;
void
b
(
a
,
b
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
struct
a
{
int
a
;
}
;
int
*
c
=
&
a
;
struct
a
d
;
static
const
int
*
e
=
&
a
;
struct
a
*
f
[
]
=
{
&
d
}
;
int
*
g
(
const
int
*
,
int
,
char
,
struct
a
)
;
struct
a
h
(
)
{
struct
a
b
[
1
]
;
g
(
c
,
a
,
*
c
,
*
b
)
;
return
*
*
f
;
}
int
*
g
(
const
int
*
b
,
int
c
,
char
d
,
struct
a
f
)
{
int
*
g
=
&
a
;
*
g
=
sizeof
a
;
*
g
=
*
e
;
return
b
;
}
int
main
(
)
{
h
(
)
;
b
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
