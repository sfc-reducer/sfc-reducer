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
char
a
;
int
b
;
char
c
;
}
;
struct
a
d
;
struct
a
e
=
{
1
}
;
static
struct
a
f
(
unsigned
char
,
unsigned
)
;
static
unsigned
g
(
)
{
f
(
a
,
a
)
;
return
a
;
}
struct
a
f
(
unsigned
char
a
,
unsigned
b
)
{
struct
a
*
c
=
&
e
;
*
c
=
d
;
*
c
=
*
c
;
return
*
c
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
