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
signed
a
;
unsigned
b
;
signed
c
;
signed
d
;
signed
e
;
signed
f
;
signed
g
;
signed
h
;
signed
i
;
}
;
struct
b
{
unsigned
a
;
char
b
;
struct
a
c
;
int
d
;
}
;
union
c
{
unsigned
d
;
}
;
struct
b
d
;
struct
b
*
e
;
union
c
f
;
union
c
*
g
=
&
f
;
char
h
(
)
;
union
c
i
(
)
;
static
struct
a
j
(
char
)
;
union
c
k
(
)
{
char
a
;
char
*
b
=
&
a
;
if
(
h
(
i
(
j
(
*
b
)
)
)
)
;
return
*
g
;
}
char
h
(
union
c
a
)
{
return
a
.
d
;
}
union
c
i
(
)
{
return
*
g
;
}
struct
a
j
(
char
a
)
{
struct
b
b
=
{
1
,
1
,
{
1
,
1
,
1
,
1
,
1
,
1
,
1
,
1
,
1
}
,
1
}
;
struct
b
*
c
=
&
b
;
struct
b
*
f
=
&
d
;
int
*
g
=
&
b
.
d
;
*
f
=
*
c
=
b
;
if
(
*
g
)
e
=
&
b
;
return
b
.
c
;
}
int
main
(
)
{
k
(
)
;
b
(
d
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
