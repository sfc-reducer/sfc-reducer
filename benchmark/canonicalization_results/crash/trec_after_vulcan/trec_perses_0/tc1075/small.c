struct
{
int
a
;
}
const
volatile
b
[
]
;
long
a
(
unsigned
a
,
char
c
)
{
for
(
a
=
1
;
a
<=
5
;
a
+=
1
)
c
&=
b
[
1
]
.
a
;
return
c
;
}
