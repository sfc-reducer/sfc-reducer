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
a
(
__m128
,
b
)
{
printf
(
"%x"
,
b
)
;
}
char
b
;
float
c
;
char
main
(
)
{
a
(
c
,
b
)
;
return
0
;
}
