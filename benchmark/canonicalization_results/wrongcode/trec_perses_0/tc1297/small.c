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
int
d
[
]
[
1
]
=
{
1
}
;
static
unsigned
e
=
1
;
int
main
(
)
{
b
(
d
[
a
]
[
e
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
