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
int
c
;
char
d
[
]
[
1
]
;
int
main
(
)
{
for
(
a
=
1
;
a
<
7
;
a
++
)
++
d
[
a
]
[
a
]
;
b
(
c
,
a
)
;
return
0
;
}
