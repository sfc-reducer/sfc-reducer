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
char
__m128
,
void
*
b
,
char
__m128d
)
{
printf
(
b
)
;
}
char
b
;
char
c
(
)
{
a
(
b
,
c
,
b
)
;
return
b
;
}
char
main
(
)
{
return
c
(
)
;
}
