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
long
a
;
long
b
;
}
;
union
b
{
unsigned
a
;
}
;
struct
a
e
=
{
1
}
;
struct
a
f
;
static
union
b
*
g
(
union
b
)
;
static
int
h
(
)
{
union
b
a
=
{
1
}
;
g
(
a
)
;
return
a
.
a
;
}
union
b
*
g
(
union
b
a
)
{
struct
a
*
b
=
&
e
;
*
b
=
f
;
*
b
=
*
b
;
return
&
a
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
