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
a
=
1
;
int
d
[
]
=
{
1
}
;
int
e
=
-
1
;
int
f
(
)
{
return
++
d
[
e
]
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
