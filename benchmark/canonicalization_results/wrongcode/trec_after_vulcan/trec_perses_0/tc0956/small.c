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
d
,
int
b
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
e
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
e
[
]
;
char
c
;
int
main
(
)
{
for
(
;
c
<
6
;
c
++
)
b
(
e
[
c
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
