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
[
]
;
int
main
(
)
{
int
i
;
for
(
i
=
1
;
i
<
10
;
i
++
)
++
c
[
i
]
;
b
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
