unsigned
char
a
(
unsigned
,
short
)
;
unsigned
b
(
)
{
return
a
(
1
,
1
)
;
}
unsigned
char
a
(
unsigned
a
,
short
b
)
{
unsigned
c
[
1
]
;
for
(
;
b
<
10
;
b
+=
1
)
++
c
[
b
]
;
return
*
c
;
}
