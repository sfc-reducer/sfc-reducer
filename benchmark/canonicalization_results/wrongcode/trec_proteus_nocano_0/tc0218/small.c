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
unsigned
d
=
0x9
;
char
e
(
unsigned
short
)
;
int
f
(
unsigned
,
char
,
int
*
)
;
int
g
(
)
{
e
(
a
)
;
return
a
;
}
char
e
(
unsigned
short
b
)
{
int
*
c
[
]
[
3
]
=
{
{
&
a
}
,
{
&
a
,
&
a
,
&
d
}
}
;
f
(
1
,
(
&
d
==
c
[
1
]
[
2
]
)
<
d
,
!
1
)
;
return
a
;
}
int
f
(
unsigned
a
,
char
b
,
int
*
c
)
{
if
(
c
==
e
^
b
)
--
d
;
return
a
;
}
int
main
(
)
{
g
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
