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
unsigned
i
(
)
{
unsigned
*
a
;
unsigned
*
*
c
[
]
[
1
]
[
6
]
=
{
&
a
}
;
unsigned
*
*
*
d
=
&
c
[
1
]
[
1
]
[
1
]
;
int
e
=
1
;
int
*
f
=
&
e
;
if
(
*
d
=
&
a
)
;
return
*
f
;
}
int
main
(
)
{
int
d
=
1
;
i
(
)
;
b
(
d
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
