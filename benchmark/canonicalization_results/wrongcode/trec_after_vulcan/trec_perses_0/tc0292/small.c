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
char
*
c
;
char
e
[
]
[
3
]
;
int
main
(
)
{
for
(
;
a
<
7
;
a
++
)
b
(
e
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
