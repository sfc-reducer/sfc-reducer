char
a
(
unsigned
char
a
,
unsigned
char
b
)
{
return
b
?
a
:
a
%
b
;
}
char
__m128
(
b
)
{
short
c
[
1
]
;
char
d
;
for
(
d
=
0
;
d
<
5
;
d
++
)
c
[
d
]
=
0
;
b
=
a
(
*
c
,
b
)
;
return
a
(
1
,
b
)
;
}
