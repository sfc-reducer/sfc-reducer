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
static
unsigned
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
int
main
(
)
{
int
j
;
j
=
1
;
for
(
;
j
<
6
;
j
++
)
b
(
d
[
j
]
[
j
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
