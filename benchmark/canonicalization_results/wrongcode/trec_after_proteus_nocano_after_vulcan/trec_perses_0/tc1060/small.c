signed
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
c
,
char
*
b
,
int
d
)
{
a
+=
c
;
}
void
d
(
b
,
c
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
c
[
]
;
unsigned
e
(
)
;
unsigned
f
(
)
{
return
e
(
)
;
}
unsigned
e
(
a
)
{
return
++
*
c
;
}
int
main
(
)
{
int
a
;
int
e
=
f
(
)
;
for
(
a
=
0
;
a
<
4
;
a
++
)
b
(
c
[
a
]
,
""
,
a
)
;
d
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
