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
b
;
void
c
(
unsigned
a
,
char
*
c
,
int
d
)
{
b
+=
a
;
}
void
d
(
int
a
,
int
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
f
[
]
;
unsigned
i
;
int
main
(
)
{
int
a
;
for
(
a
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
c
(
f
[
a
]
,
""
,
a
)
;
d
(
b
,
a
)
;
return
0
;
}
