create table ql(
tenql varchar(25),
mql nvarchar(20) primary key
);
create table lsp(
tenl varchar(25),
mlsp nvarchar(20) primary key
);
create table sp(
msp nvarchar(20) primary key,
nsx date,
mlsq nvarchar(20) foreign key references lsp(mlsp),
mql nvarchar(20) foreign key references ql(mql)
);
insert into ql(tenql,mql)
values (N'Nguyễn Văn An','987688')

insert into lsp(tenl,mlsp)
values (N'Máy tính sách tay Z37',N'Z37E')

insert into sp(msp,nsx)
values (N'Z37 11111','09-12-12')

select tenl from lsp
select * from sp
select tenql from ql
