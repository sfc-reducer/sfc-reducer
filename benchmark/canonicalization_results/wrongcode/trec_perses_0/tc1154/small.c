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
d
[
]
;
int
a
=
1
;
static
int
*
e
=
&
a
;
unsigned
*
f
=
d
;
unsigned
*
*
g
=
&
f
;
static
const
int
*
h
=
&
a
;
unsigned
i
(
)
{
for
(
;
a
;
--
a
)
;
*
e
=
*
h
;
return
*
*
g
;
}
int
main
(
)
{
i
(
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
