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
unsigned
c
,
char
*
b
,
int
d
)
{
a
+=
c
;
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
struct
a
{
short
a
;
unsigned
b
;
char
c
;
}
;
struct
c
{
struct
a
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
c
f
;
char
g
;
char
*
h
=
&
g
;
static
struct
c
*
i
(
char
,
unsigned
short
,
int
)
;
static
unsigned
short
j
(
short
,
unsigned
short
,
struct
c
*
)
;
static
char
k
(
)
{
i
(
a
,
a
,
a
)
;
return
*
h
;
}
struct
c
*
i
(
char
a
,
unsigned
short
b
,
int
c
)
{
struct
c
*
d
=
&
f
;
j
(
a
,
a
,
d
)
;
return
d
;
}
unsigned
short
j
(
short
b
,
unsigned
short
c
,
struct
c
*
d
)
{
struct
a
*
a
=
&
e
;
*
a
=
f
.
a
;
*
a
=
*
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
c
=
k
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
