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
unsigned
b
;
char
c
;
char
d
;
}
;
struct
b
{
short
a
;
}
;
struct
b
e
;
struct
a
g
;
struct
a
h
=
{
1
}
;
struct
a
*
i
=
&
h
;
char
*
k
(
short
,
struct
b
)
;
struct
a
l
(
)
;
int
j
(
)
{
int
*
b
=
&
a
;
k
(
a
,
e
)
;
return
*
b
;
}
char
*
k
(
short
a
,
struct
b
b
)
{
struct
a
*
c
=
&
g
;
*
c
=
l
(
)
;
*
c
=
*
c
;
return
&
a
;
}
struct
a
l
(
)
{
return
*
i
;
}
int
main
(
)
{
j
(
)
;
b
(
g
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
