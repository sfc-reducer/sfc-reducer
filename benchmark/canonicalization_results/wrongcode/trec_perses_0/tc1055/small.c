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
unsigned
b
,
char
*
c
,
int
d
)
{
a
+=
b
;
}
void
c
(
int
a
,
int
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
unsigned
a
;
int
b
;
}
;
union
b
{
short
a
;
}
;
struct
a
d
=
{
1
,
1
}
;
union
b
e
[
]
[
1
]
;
int
*
*
*
f
;
unsigned
g
(
)
{
unsigned
short
*
b
=
&
e
[
1
]
[
1
]
.
a
;
int
*
c
=
&
d
.
b
;
int
*
*
*
*
a
=
&
f
;
*
c
&=
--
*
b
>
(
a
==
&
f
)
;
return
*
b
;
}
int
main
(
)
{
g
(
)
;
b
(
d
.
b
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
