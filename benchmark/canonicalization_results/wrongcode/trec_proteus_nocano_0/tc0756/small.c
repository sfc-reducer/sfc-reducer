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
b
,
a
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
int
d
[
]
[
1
]
;
int
*
e
;
unsigned
f
(
)
{
int
*
*
a
=
&
e
;
int
*
*
b
=
&
e
;
int
*
c
=
*
d
;
*
*
d
=
-
(
b
==
a
)
;
return
*
c
;
}
int
main
(
)
{
f
(
)
;
b
(
d
[
a
]
[
a
]
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
