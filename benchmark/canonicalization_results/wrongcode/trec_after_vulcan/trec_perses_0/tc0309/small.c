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
b
,
a
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
unsigned
c
;
unsigned
a
;
char
b
;
}
;
union
c
{
short
a
;
}
;
char
*
e
;
short
f
;
struct
a
g
;
struct
a
c
=
{
1
}
;
int
*
h
(
)
;
struct
a
i
(
)
;
union
c
j
(
char
*
*
,
char
*
*
)
;
char
*
*
k
(
struct
a
*
,
unsigned
short
,
union
c
,
unsigned
short
)
;
int
l
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
h
(
i
(
)
)
;
return
*
b
;
}
int
*
h
(
)
{
short
*
a
=
&
f
;
*
a
=
c
.
c
;
return
a
;
}
struct
a
i
(
)
{
struct
a
*
a
=
0
;
union
c
b
=
{
1
}
;
char
*
*
d
=
&
e
;
j
(
k
(
a
,
f
,
b
,
f
)
,
d
)
;
return
c
;
}
union
c
j
(
char
*
*
a
,
char
*
*
b
)
{
union
c
d
=
{
1
}
;
struct
a
*
e
=
&
g
;
struct
a
*
f
=
&
c
;
*
f
=
*
e
;
*
f
=
c
;
return
d
;
}
char
*
*
k
(
struct
a
*
a
,
unsigned
short
b
,
union
c
c
,
unsigned
short
d
)
{
return
a
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
l
(
)
;
b
(
f
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
