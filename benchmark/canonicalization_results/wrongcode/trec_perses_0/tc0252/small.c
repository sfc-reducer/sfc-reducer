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
struct
a
{
int
a
;
unsigned
b
;
char
c
;
short
d
;
short
e
;
}
;
int
*
d
;
struct
a
e
;
int
*
f
(
int
*
)
;
struct
a
g
(
int
,
int
*
,
int
*
)
;
unsigned
h
(
)
{
f
(
d
)
;
return
a
;
}
int
*
f
(
int
*
b
)
{
int
*
*
c
;
int
*
*
*
d
=
&
c
;
g
(
a
,
*
*
d
,
*
*
d
)
;
return
b
;
}
struct
a
g
(
int
a
,
int
*
b
,
int
*
c
)
{
struct
a
d
=
{
1
}
;
struct
a
*
f
=
&
e
;
*
f
=
d
;
*
f
=
*
f
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
h
(
)
;
b
(
e
.
a
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
