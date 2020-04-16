
<html>
<head>
<title>Meteo-ESTG</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">

<style>
	body { background : #FFFFFF ; margin:1 ; font-family:'Arial','Helvetica'; font-size:9pt;}
	a { font-family:'Arial','Helvetica'; font-size:9pt; CURSOR: pointer; COLOR: #0033FF; TEXT-DECORATION: none }
//	a:hover {COLOR: #313131; text-decoration:underline };
	a:hover {text-decoration:underline };

	a.graficos { font-weight : none ;  }
	a.nav { font-size:8pt; color : #6e0312 ;  }
	a.lnk1 { font-size:8pt; font-weight:bold; }
	a.lnk3 { font-size:9pt; font-weight:bold; }
	a.lnk4 { font-size:11pt; font-weight:bold; }
	a.lnk2 { font-size:10pt; font-weight:bold; }
	a.menu { font-size:8pt; font-weight:bold; color:black; text-decoration:none;}
	a.m1 { font-size:7pt;}
	a.m2 { font-size:8pt;color:white;text-decoration:none;}
	font.9b { font-family:'Arial','Helvetica'; font-size:9pt; color:gray;font-weight:bold;}
	font.10b { font-family:'Arial','Helvetica'; font-size:11pt; color:#887946;font-weight:bold;}
	img { border-color : white }
	table { font-family:'Arial','Helvetica'; font-size:9pt; color:black;}
	td { font-family:'Arial','Helvetica';font-size:9pt; }
	th { font-family:'Arial','Helvetica';font-size:9pt; color:#FFFFFF; text-align:left}
	input {	font-family:'Arial','Helvetica'; font-size:9pt; color:black; }
	select { font-family:'Arial','Helvetica'; font-size:9pt; color:black; }
	table.8p {font-family:'Arial','Helvetica'; font-size:8pt; color:black;}
	ul { margin-top : 0; margin-bottom : 0 }
	p { margin-top:0;margin-bottom:0 }
</style>






<script language = "JavaScript">
<!--
function InitPage(homePag){
  if (homePag){
    PassFlash(9.38, 28.33, 271.38, 12.93, 16.26, 12.85)
  }
  return true;
}

function PassFlash(Vvento, VventoMax, Dvento, Temp, Tmax, Tmin){
  window.document.rosadosventos.SetVariable("vvento", Vvento);
    window.document.rosadosventos.SetVariable("vmax", VventoMax);
    window.document.rosadosventos.SetVariable("dvento", Dvento);

  window.document.termometro.SetVariable("temp", Math.round(Temp));
    window.document.termometro.SetVariable("max", Tmax);
    window.document.termometro.SetVariable("min", Tmin);

  return true;
}

function get_date() {

  // Vamos ler o dia e o ano
  dia    = new Date();
  ano    = dia.getYear();
        diasem = dia.getDay();

  // correção para browsers que retornam 100 no ano 2000
  if (ano < 2000) ano = 1900 + dia.getYear();

  // Meses e dias da semana
  mes = new Array("Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro");
  dias = new Array("Domingo", "Segunda-feira", "Terça-feira","Quarta-feira","Quinta-feira","Sexta-feira","Sábado");

  // Vamos mostrar o resultado
  document.writeln( dias[diasem] + ", " + dia.getDate() + " de " +  mes[dia.getMonth()] + " " + ano);
}



//-->
</script>

</head>
<body topmargin="5" onLoad="InitPage(0)">
<CENTER>
<TABLE cellSpacing=0 cellPadding=0 width=770 border=0>
  <TBODY>
    <TR>
      	<TD height="90" align=middle vAlign=top background="Imagens/logo_ipl_estg_meteo_770_90.jpg">

		</TD>
    </TR>

    <TR>
      	<TD height="1" align=middle vAlign=top>

		</TD>
    </TR>
  </TBODY>
</TABLE>
<table width="770" border="0" cellspacing="0">
    <tr>

    <th width="132" height="20" bgcolor="#840c13">
		<div align="center">

		</div>
	</th>
    <th height="20" bgcolor="#840c13" width="518">
		<div align="right">

		</div>
	</th>
  </tr>
</table>


<TABLE cellSpacing=0 cellPadding=0 width=770 border=0>
<TBODY>
	<TR>
    	<TD vAlign=top width="135">
			<CENTER>
				<table width="100%" border="0" cellspacing="1" cellpadding="0">
<TBODY>
<TR>
	<td>
		<TABLE cellSpacing=0 cellPadding=0 width="100%" border=0>
		<TBODY>
		<TR>
			<td>
			<br>
		<table width="100%" border="0" cellspacing="0" cellpadding="4"><tr><td vAlign=top><a class="menu" href="default.asp">Início</a></td></tr></table><table width="100%" border="0" cellpadding="0" cellspacing="0"><tr><td height="1" align="left" valign="top" background="Imagens/p_cz.gif"></td></tr><tr><td height="1" align="left" valign="top" background="Imagens/p_br.gif"></td></tr></table><table width="100%" border="0" cellspacing="0" cellpadding="4"><tr><td vAlign=top><a class="menu" href="historico.asp">Histórico</a></td></tr></table><table width="100%" border="0" cellpadding="0" cellspacing="0"><tr><td height="1" align="left" valign="top" background="Imagens/p_cz.gif"></td></tr><tr><td height="1" align="left" valign="top" background="Imagens/p_br.gif"></td></tr></table><table width="100%" border="0" cellspacing="0" cellpadding="4"><tr><td vAlign=top><a class="menu" href="contactos.asp">Contactos</a></td></tr></table><table width="100%" border="0" cellpadding="0" cellspacing="0"><tr><td height="1" align="left" valign="top" background="Imagens/p_cz.gif"></td></tr><tr><td height="1" align="left" valign="top" background="Imagens/p_br.gif"></td></tr></table><table width="100%" border="0" cellspacing="0" cellpadding="4"><tr><td vAlign=top><a class="menu" href="software.asp">Software</a></td></tr></table><table width="100%" border="0" cellpadding="0" cellspacing="0"><tr><td height="1" align="left" valign="top" background="Imagens/p_cz.gif"></td></tr><tr><td height="1" align="left" valign="top" background="Imagens/p_br.gif"></td></tr></table><table width="100%" border="0" cellspacing="0" cellpadding="4"><tr><td vAlign=top><a class="menu" href="descricao.asp">Descrição</a></td></tr></table><table width="100%" border="0" cellpadding="0" cellspacing="0"><tr><td height="1" align="left" valign="top" background="Imagens/p_cz.gif"></td></tr><tr><td height="1" align="left" valign="top" background="Imagens/p_br.gif"></td></tr></table><table width="100%" border="0" cellpadding="0" cellspacing="0"><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr><tr><td align="left" valign="top">&nbsp;</td></tr></table>
			</td>
		</TR>
		</TBODY>
		</TABLE>
	</td>
</TR>
</TBODY>
</TABLE>






<TABLE width=100% border=0 cellPadding=2 cellSpacing=8>
  <TBODY>
    <TR>
      <TD width="100%" align=right vAlign=top>
        <p>
          <script language="JavaScript" type="text/JavaScript">
			get_date();
		</script>
	      </p>
        <br>
        <br>
        <br>
        </TD>
    </TR>
  </TBODY>
</TABLE>
    		</CENTER>
		</TD>
		<TD vAlign=top align=middle width="1" bgColor=black> </TD>
		<TD width="14"> </TD>
    	<TD width="620" valign="top">
			<br>
			<strong><font color=#840c13 size="4" face="Verdana, Arial, Helvetica, sans-serif">
			<!-- InstanceBeginEditable name="Titulo" -->
			Hist&oacute;rico do dia: 08-03-2015<!-- InstanceEndEditable -->
			</font></strong>
			<br>
			<br>
		<!-- InstanceBeginEditable name="Corpo" -->

          <TABLE width="95%" BORDER=1 >
            <TR>
              <TD rowspan="2"><div align="center"><B></B><B></B> </div>
                <P align="center">&nbsp;</P>
                <div align="center"></div></TD>
              <TD colspan="2"><div align="center"><b>Temperatura do Ar<br>
                  </b>(ºC)</div></TD>
              <TD colspan="2"><div align="center"><b>Humidade Relativa<br>
                  </b>(%)</div></TD>
              <TD colspan="2"><div align="center"><b>Pressão Atmosférica<br>
                  </b>(mBar)</div></TD>
            </TR>
            <TR>
              <TD> <div align="center"><I><TT><strong>Valor</strong></TT></I></div></TD>
              <TD><div align="center"><I><TT><span style="font-weight: bold">Hora</span></TT></I></div></TD>
              <TD> <div align="center"><I><TT><strong>Valor</strong></TT></I></div></TD>
              <TD><div align="center"><I><TT><span style="font-weight: bold">Hora</span></TT></I></div></TD>
              <TD> <div align="center"><I><TT><strong>Valor</strong></TT></I></div></TD>
              <TD><div align="center"><I><TT><span style="font-weight: bold">Hora</span></TT></I></div></TD>
            </TR>
            <TR>

              <TD> <P align="center"><font color="#FF0000"><strong>M&aacute;ximo</strong></font></P></TD>
              <TD height="40"> <P align="center"><font color="#FF0000">24.43</font></P></TD>
              <TD> <P align="center">13:15:00</P></TD>

              <TD> <P align="center"><font color="#FF0000">97.3</font></P></TD>
              <TD> <P align="center">06:45:00</P></TD>

              <TD> <P align="center"><font color="#FF0000">1009</font></P></TD>
              <TD> <P align="center">00:00:00</P></TD>
            </TR>
            <TR>
              <TD> <P align="center"><font color="#0000FF"><strong>M&iacute;nimo</strong></font></P></TD>

              <TD height="40"> <P align="center"><font color="#0000FF">8.09</font></P></TD>
              <TD> <P align="center">06:45:00</P></TD>

              <TD> <P align="center"><font color="#0000FF">40.66</font></P></TD>
              <TD> <P align="center">15:45:00</P></TD>

              <TD> <P align="center"><font color="#0000FF">1003</font></P></TD>
              <TD> <P align="center">16:30:00</P></TD>
            </TR>
            <TR>
              <TD> <P align="center"><font color="#009900"><strong>M&eacute;dia</strong></font></P></TD>

              <TD height="40" colspan="2"> <P align="center"><font color="#009900">15.3</font></P></TD>

              <TD colspan="2"> <P align="center"><font color="#009900">74.9</font></P></TD>

              <TD colspan="2"> <P align="center"><font color="#009900">1005.9</font></P></TD>
            </TR>
          </TABLE>
			<br><br>

          <TABLE width="95%" BORDER=1 >
            <TR>
              <TD rowspan="2"><div align="center"><B></B><B></B> </div>
                <P align="center">&nbsp;</P>
                <div align="center"></div></TD>
              <TD colspan="2"><div align="center"><b>Radiação Solar<br>
                  </b>(W/m²)</div></TD>
              <TD colspan="2"><div align="center"><b>Direcção do Vento<br>
                  </b>(ºN)</div></TD>
              <TD colspan="2"><div align="center"><b>Velocidade do Vento<br>
                  </b>(Km/h)</div></TD>
            </TR>
            <TR>
              <TD> <div align="center"><I><TT><strong>Valor</strong></TT></I></div></TD>
              <TD><div align="center"><I><TT><span style="font-weight: bold">Hora</span></TT></I></div></TD>
              <TD> <div align="center"><I><TT><strong>Valor</strong></TT></I></div></TD>
              <TD><div align="center"><I><TT><span style="font-weight: bold">Hora</span></TT></I></div></TD>
              <TD> <div align="center"><I><TT><strong>Valor</strong></TT></I></div></TD>
              <TD><div align="center"><I><TT><span style="font-weight: bold">Hora</span></TT></I></div></TD>
            </TR>
            <TR>
              <TD> <P align="center"><font color="#FF0000"><strong>M&aacute;ximo</strong></font></P></TD>

              <TD height="40"> <P align="center"><font color="#FF0000">839</font></P></TD>
              <TD> <P align="center">13:00:00</P></TD>
              <TD> <P align="center">---</P></TD>
              <TD> <P align="center">---</P></TD>

              <TD> <P align="center"><font color="#FF0000">14.54</font></P></TD>
              <TD> <P align="center">17:15:00</P></TD>
            </TR>
            <TR>
              <TD> <P align="center"><font color="#0000FF"><strong>M&iacute;nimo</strong></font></P></TD>

              <TD height="40"> <P align="center"><font color="#0000FF">0.4</font></P></TD>
              <TD> <P align="center">00:00:00</P></TD>
              <TD> <P align="center">---</P></TD>
              <TD> <P align="center">---</P></TD>
              <TD> <P align="center"><font color="#0000FF">0</font></P></TD>
              <TD> <P align="center">---</P></TD>
            </TR>
            <TR>
              <TD> <P align="center"><font color="#009900"><strong>M&eacute;dia</strong></font></P></TD>

              <TD height="40" colspan="2"> <P align="center"><font color="#009900">186.7</font></P></TD>

              <TD colspan="2"><div align="center"><font color="#009900">NE</font></div></TD>

              <TD colspan="2"> <P align="center"><font color="#009900">4.7</font></P></TD>
            </TR>
          </TABLE>
			<br><br>
            <TABLE width="95%" BORDER=1 >
              <TR>
                <TD><div align="center"><B></B> </div>
                  <P align="center">&nbsp;</P></TD>
                <TD colspan="4"><div align="center"><b>Precipitação<br>
                  </b>(l/m²)</div></TD>
              </TR>
              <TR>
                <TD> <div align="center"><I><TT><strong>Data</strong></TT></I>
                  </div></TD>
                <TD><div align="center"><B>00h - 06h</B></div></TD>
                <TD><div align="center"><B>06h - 12h</B></div></TD>
                <TD><div align="center"><B>12h - 18h</B></div></TD>
                <TD><div align="center"><B>18h - 00h</B></div></TD>
              </TR>
              <TR>

              <TD height="40"> <P align="center"><strong>08-03-2015</strong></P></TD>

              <TD> <P align="center">0,2</P></TD>
                <TD> <P align="center">0,4</P></TD>
                <TD> <P align="center">0,6</P></TD>
                <TD> <P align="center">0,8</P></TD>
              </TR>
            </TABLE>

          <!-- InstanceEndEditable --> </TD>
	</TR>
</TBODY>
</TABLE>
<TABLE cellSpacing=0 cellPadding=0 width=770 border=0>
  <TBODY>
    <TR>
		<TD vAlign=bottom width=130><BR>
		<TD vAlign=top>
		</TD>
		<TD vAlign=top align=right><BR><BR>
		</TD>
    </TR>
  </TBODY>
</TABLE>


</CENTER>
</body>
<!-- InstanceEnd --></html>
