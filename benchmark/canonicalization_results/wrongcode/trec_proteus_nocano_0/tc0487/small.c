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
d
[
]
[
1
]
;
int
e
;
int
main
(
)
{
int
j
;
for
(
;
!
e
;
e
++
)
for
(
j
=
1
;
j
<
3
;
j
++
)
b
(
d
[
j
]
[
a
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
