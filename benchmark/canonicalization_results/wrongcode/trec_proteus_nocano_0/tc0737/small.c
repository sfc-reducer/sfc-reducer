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
main
(
)
{
int
b
,
a
;
for
(
&
b
;
b
;
b
++
)
for
(
&
a
;
!
a
;
a
++
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
