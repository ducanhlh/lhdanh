insert into Hang(MaHang,Tenhang,Diachi,Dienthoai)
         values('123','Asus','USA','983232');

select * from Hang;

insert into DSSanPham(TenSP,Mota,Donvi,Gia,Soluong)
         values(N'M�y T�nh T450',N'M�y nh?p c?',N'Chi?c','1000','10'),
			   (N'?i?n tho?i Nokia 5670',N'?i?n tho?i ?ang hot',N'Chi?c','200','200'),
			   (N'M�y in 450',N'M�y in ?ang lo?i b�nh',N'Chi?c','100','10');

select * from DSSanPham;

insert into Hang_SanPham(Ma,idSP)
	values('123','1'),
		  ('123','2'),
	      ('123','3');

select * from Hang_SanPham;