signed
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
)
{
}
void
d
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
*
e
=
&
a
;
int
*
*
f
=
&
e
;
static
const
int
*
g
=
&
a
;
int
*
*
h
(
)
;
int
*
*
i
(
int
*
*
,
unsigned
,
int
,
short
)
;
unsigned
c
(
)
{
if
(
h
(
i
(
f
,
a
,
*
*
f
,
a
)
)
)
;
return
*
e
;
}
int
*
*
h
(
)
{
int
*
e
=
&
a
;
*
e
|=
1
;
*
e
=
*
g
;
return
b
;
}
int
*
*
i
(
int
*
*
b
,
unsigned
a
,
int
d
,
short
f
)
{
int
*
e
=
&
a
;
*
e
=
a
;
return
b
;
}
int
main
(
)
{
int
a
=
c
(
)
;
d
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
