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
unsigned
b
,
char
*
c
,
int
d
)
{
a
+=
b
;
}
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
d
[
]
;
short
e
;
unsigned
f
(
)
{
return
e
++
;
}
int
main
(
)
{
int
i
;
f
(
)
;
for
(
i
=
1
;
i
<
9
;
i
++
)
b
(
d
[
i
]
,
""
,
a
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
