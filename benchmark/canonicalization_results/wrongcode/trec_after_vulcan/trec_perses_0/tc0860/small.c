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
struct
d
{
long
a
;
}
;
long
b
=
18446744073709551606
;
struct
d
c
[
]
;
unsigned
e
;
unsigned
g
(
)
{
c
[
1
]
=
c
[
b
]
;
return
a
;
}
int
main
(
)
{
int
a
=
g
(
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
