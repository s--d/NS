/* NEVER EVER edit this manually, fix the mkhelp script instead! */
#include <stdio.h>
void hugehelp(void)
{
puts (
"                                  _   _ ____  _     \n"
"  Project                     ___| | | |  _ \\| |    \n"
"                             / __| | | | |_) | |    \n"
"                            | (__| |_| |  _ <| |___ \n"
"                             \\___|\\___/|_| \\_\\_____|\n"
"[1mNAME[0m\n"
"       curl − transfer a URL\n"
"\n"
"[1mSYNOPSIS[0m\n"
"       [1mcurl [options] [4m[22m[URL...][0m\n"
"\n"
"[1mDESCRIPTION[0m\n"
"       [1mcurl  [22mis  a  client  to get documents/files from or send documents to a\n"
);
 puts(
"       server, using any of the supported protocols (HTTP, HTTPS, FTP, GOPHER,\n"
"       DICT,  TELNET,  LDAP  or FILE). The command is designed to work without\n"
"       user interaction or any kind of interactivity.\n"
"\n"
"       curl offers a busload of useful tricks like proxy support, user authen‐\n"
"       tication,  ftp  upload,  HTTP  post, SSL (https:) connections, cookies,\n"
"       file transfer resume and more.\n"
"\n"
"[1mURL[0m\n"
);
 puts(
"       The URL syntax is protocol dependent. You’ll find a  detailed  descrip‐\n"
"       tion in RFC 2396.\n"
"\n"
"       You  can  specify  multiple  URLs or parts of URLs by writing part sets\n"
"       within braces as in:\n"
"\n"
"        http://site.{one,two,three}.com\n"
"\n"
"       or you can get sequences of alphanumeric series by using [] as in:\n"
"\n"
"        ftp://ftp.numericals.com/file[1‐100].txt\n"
"        ftp://ftp.numericals.com/file[001‐100].txt    (with leading zeros)\n"
"        ftp://ftp.letters.com/file[a‐z].txt\n"
"\n"
);
 puts(
"       It is possible to specify up to 9 sets or series  for  a  URL,  but  no\n"
"       nesting is supported at the moment:\n"
"\n"
"        http://www.any.org/archive[1996‐1999]/vol‐\n"
"       ume[1‐4]part{a,b,c,index}.html\n"
"\n"
"       You can specify any amount of URLs on the command line.  They  will  be\n"
"       fetched in a sequential manner in the specified order.\n"
"\n"
"       Curl will attempt to re‐use connections for multiple file transfers, so\n"
);
 puts(
"       that getting many files from the same server will not do multiple  con‐\n"
"       nects / handshakes. This improves speed. Of course this is only done on\n"
"       files specified on a single command line and  cannot  be  used  between\n"
"       separate curl invokes.\n"
"\n"
"[1mOPTIONS[0m\n"
"       ‐a/‐‐append\n"
"              (FTP)  When  used in a ftp upload, this will tell curl to append\n"
"              to the target file  instead  of  overwriting  it.  If  the  file\n"
);
 puts(
"              doesn’t exist, it will be created.\n"
"\n"
"              If this option is used twice, the second one will disable append\n"
"              mode again.\n"
"\n"
"       ‐A/‐‐user‐agent <agent string>\n"
"              (HTTP) Specify the User‐Agent string to send to the HTTP server.\n"
"              Some  badly  done CGIs fail if its not set to \"Mozilla/4.0\".  To\n"
"              encode blanks in the string, surround  the  string  with  single\n"
);
 puts(
"              quote  marks.  This can also be set with the ‐H/‐‐header flag of\n"
"              course.\n"
"\n"
"              If this option is set more than once, the last one will  be  the\n"
"              one that’s used.\n"
"\n"
"       ‐b/‐‐cookie <name=data>\n"
"              (HTTP)  Pass the data to the HTTP server as a cookie. It is sup‐\n"
"              posedly the data previously received from the server in a  \"Set‐\n"
"              Cookie:\"  line.  The data should be in the format \"NAME1=VALUE1;\n"
);
 puts(
"              NAME2=VALUE2\".\n"
"\n"
"              If no ’=’ letter is used in the line, it is treated as  a  file‐\n"
"              name  to  use to read previously stored cookie lines from, which\n"
"              should be used in this session if they match. Using this  method\n"
"              also  activates  the \"cookie parser\" which will make curl record\n"
"              incoming cookies too, which may be handy if you’re using this in\n"
);
 puts(
"              combination  with  the  ‐L/‐‐location option. The file format of\n"
"              the file to read cookies from should be plain  HTTP  headers  or\n"
"              the Netscape/Mozilla cookie file format.\n"
"\n"
"              [1mNOTE  [22mthat  the  file specified with ‐b/‐‐cookie is only used as\n"
"              input. No cookies will be stored in the file. To store  cookies,\n"
"              save the HTTP headers to a file using ‐D/‐‐dump‐header!\n"
"\n"
);
 puts(
"              If  this  option is set more than once, the last one will be the\n"
"              one that’s used.\n"
"\n"
"       ‐B/‐‐use‐ascii\n"
"              Use ASCII transfer when getting an FTP file or  LDAP  info.  For\n"
"              FTP,  this  can  also be enforced by using an URL that ends with\n"
"              \";type=A\". This option causes data sent to stdout to be in  text\n"
"              mode for win32 systems.\n"
"\n"
"              If  this option is used twice, the second one will disable ASCII\n"
);
 puts(
"              usage.\n"
"\n"
"       ‐‐ciphers <list of ciphers>\n"
"              (SSL) Specifies which ciphers to use in the connection. The list\n"
"              of  ciphers  must  be using valid ciphers. Read up on SSL cipher\n"
"              list          details           on           this           URL:\n"
"              [4mhttp://www.openssl.org/docs/apps/ciphers.html[24m  [4m(Option[24m  [4madded[24m [4min[0m\n"
"              [4mcurl[24m [4m7.9)[0m\n"
"\n"
);
 puts(
"              If this option is used several times, the last one will override\n"
"              the others.\n"
"\n"
"       ‐‐compressed\n"
"              (HTTP)  Request  a compressed response using the deflate or gzip\n"
"              algorithms and return the uncompressed document.  If this option\n"
"              is  used and the server sends an unsupported encoding, Curl will\n"
"              report an error.\n"
"\n"
"       ‐‐connect‐timeout <seconds>\n"
);
 puts(
"              Maximum time in seconds that you allow  the  connection  to  the\n"
"              server  to  take.   This  only limits the connection phase, once\n"
"              curl has connected this option is of no more use. See  also  the\n"
"              [4m‐‐max‐time[24m option.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐c/‐‐cookie‐jar <file name>\n"
"              Specify to which file you want curl to write all cookies after a\n"
);
 puts(
"              completed  operation.  Curl  writes  all cookies previously read\n"
"              from a specified file as  well  as  all  cookies  received  from\n"
"              remote server(s). If no cookies are known, no file will be writ‐\n"
"              ten. The file will be written using  the  Netscape  cookie  file\n"
"              format.  If  you  set  the  file name to a single dash, \"‐\", the\n"
"              cookies will be written to stdout. (Option added in curl 7.9)\n"
"\n"
);
 puts(
"              [1mNOTE [22mIf the cookie jar can’t be created or written to, the whole\n"
"              curl operation won’t fail or even report an error clearly. Using\n"
"              ‐v will get a warning displayed, but that is  the  only  visible\n"
"              feedback you get about this possibly lethal situation.\n"
"\n"
"              If  this  option  is  used several times, the last specfied file\n"
"              name will be used.\n"
"\n"
"       ‐C/‐‐continue‐at <offset>\n"
);
 puts(
"              Continue/Resume a previous file transfer at  the  given  offset.\n"
"              The  given  offset  is  the  exact  number of bytes that will be\n"
"              skipped counted from the beginning of the source file before  it\n"
"              is transfered to the destination.  If used with uploads, the ftp\n"
"              server command SIZE will not be used by curl.\n"
"\n"
"              Use \"‐C ‐\" to tell curl to automatically find out  where/how  to\n"
);
 puts(
"              resume  the  transfer. It then uses the given output/input files\n"
"              to figure that out.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐‐create‐dirs\n"
"              When  used  in  conjunction with the ‐o option, curl will create\n"
"              the necessary local directory hierarchy as needed.\n"
"\n"
"       ‐‐crlf (FTP) Convert LF to CRLF in upload. Useful for MVS (OS/390).\n"
"\n"
);
 puts(
"              If this option is used twice, the second will again disable crlf\n"
"              converting.\n"
"\n"
"       ‐d/‐‐data <data>\n"
"              (HTTP)  Sends  the  specified data in a POST request to the HTTP\n"
"              server, in a way that can emulate as if a user has filled  in  a\n"
"              HTML  form  and pressed the submit button. Note that the data is\n"
"              sent exactly as specified with no  extra  processing  (with  all\n"
);
 puts(
"              newlines  cut  off).   The data is expected to be \"url‐encoded\".\n"
"              This will cause curl to pass the data to the  server  using  the\n"
"              content‐type  application/x‐www‐form‐urlencoded.  Compare to ‐F.\n"
"              If more than one ‐d/‐‐data option is used on  the  same  command\n"
"              line,  the  data pieces specified will be merged together with a\n"
"              separating &‐letter. Thus, using ’‐d name=daniel ‐d skill=lousy’\n"
);
 puts(
"              would    generate    a    post    chunk    that    looks    like\n"
"              ’name=daniel&skill=lousy’.\n"
"\n"
"              If you start the data with the letter @, the rest  should  be  a\n"
"              file  name  to read the data from, or ‐ if you want curl to read\n"
"              the data from stdin.  The contents of the file must  already  be\n"
"              url‐encoded.  Multiple files can also be specified. Posting data\n"
);
 puts(
"              from a file named ’foobar’ would thus be done with \"‐‐data @foo‐\n"
"              bar\".\n"
"\n"
"              To  post  data purely binary, you should instead use the ‐‐data‐\n"
"              binary option.\n"
"\n"
"              ‐d/‐‐data is the same as ‐‐data‐ascii.\n"
"\n"
"              If this option is used several times,  the  ones  following  the\n"
"              first will append data.\n"
"\n"
"       ‐‐data‐ascii <data>\n"
"              (HTTP) This is an alias for the ‐d/‐‐data option.\n"
"\n"
);
 puts(
"              If  this  option  is  used several times, the ones following the\n"
"              first will append data.\n"
"\n"
"       ‐‐data‐binary <data>\n"
"              (HTTP) This posts data in a similar manner as ‐‐data‐ascii does,\n"
"              although when using this option the entire context of the posted\n"
"              data is kept as‐is. If you want to post a  binary  file  without\n"
"              the  strip‐newlines  feature of the ‐‐data‐ascii option, this is\n"
"              for you.\n"
"\n"
);
 puts(
"              If this option is used several times,  the  ones  following  the\n"
"              first will append data.\n"
"\n"
"       ‐‐disable‐epsv\n"
"              (FTP)  Tell  curl  to  disable  the use of the EPSV command when\n"
"              doing passive FTP downloads. Curl  will  normally  always  first\n"
"              attempt  to  use EPSV before PASV, but with this option, it will\n"
"              not try using EPSV.\n"
"\n"
"              If this option is used several times, each occurrence will  tog‐\n"
);
 puts(
"              gle this on/off.\n"
"\n"
"       ‐D/‐‐dump‐header <file>\n"
"              Write the protocol headers to the specified file.\n"
"\n"
"              This  option  is handy to use when you want to store the cookies\n"
"              that a HTTP site sends to you. The cookies could then be read in\n"
"              a second curl invoke by using the ‐b/‐‐cookie option!\n"
"\n"
"              When  used  on FTP, the ftp server response lines are considered\n"
"              being \"headers\" and thus are saved there.\n"
"\n"
);
 puts(
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐e/‐‐referer <URL>\n"
"              (HTTP)  Sends the \"Referer Page\" information to the HTTP server.\n"
"              This can also be set with the ‐H/‐‐header flag of course.   When\n"
"              used  with  [4m‐L/‐‐location[24m  you can append \";auto\" to the referer\n"
"              URL to make curl automatically set the previous URL when it fol‐\n"
);
 puts(
"              lows  a  Location: header. The \";auto\" string can be used alone,\n"
"              even if you don’t set an initial referer.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐‐environment\n"
"              (RISC  OS ONLY) Sets a range of environment variables, using the\n"
"              names the ‐w option supports, to easier allow extraction of use‐\n"
"              ful information after having run curl.\n"
"\n"
);
 puts(
"              If  this option is used several times, each occurrence will tog‐\n"
"              gle this on/off.\n"
"\n"
"       ‐‐egd‐file <file>\n"
"              (HTTPS) Specify the path name to the  Entropy  Gathering  Daemon\n"
"              socket.  The  socket  is  used to seed the random engine for SSL\n"
"              connections. See also the [4m‐‐random‐file[24m option.\n"
"\n"
"       ‐E/‐‐cert <certificate[:password]>\n"
"              (HTTPS) Tells curl to use the specified  certificate  file  when\n"
);
 puts(
"              getting  a  file with HTTPS. The certificate must be in PEM for‐\n"
"              mat.  If the optional  password  isn’t  specified,  it  will  be\n"
"              queried  for  on the terminal. Note that this certificate is the\n"
"              private key and the private certificate concatenated!\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐‐cacert <CA certificate>\n"
"              (HTTPS) Tells curl to use the specified certificate file to ver‐\n"
);
 puts(
"              ify the peer. The file may contain multiple CA certificates. The\n"
"              certificate(s) must be in PEM format.\n"
"\n"
"              curl  recognizes the environment variable named ’CURL_CA_BUNDLE’\n"
"              if that is set, and uses the given path as a path to a  CA  cert\n"
"              bundle. This option overrides that variable.\n"
"\n"
"              The  windows  version  of  curl will automatically look for a CA\n"
);
 puts(
"              certs file named ´curl‐ca‐bundle.crt´, either in the same direc‐\n"
"              tory as curl.exe, or in the Current Working Directory, or in any\n"
"              folder along your PATH.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐‐capath <CA certificate directory>\n"
"              (HTTPS) Tells curl to use the specified certificate directory to\n"
"              verify the peer. The certificates must be in PEM format, and the\n"
);
 puts(
"              directory  must  have  been processed using the c_rehash utility\n"
"              supplied with openssl. Using ‐‐capath can  allow  curl  to  make\n"
"              https  connections  much more efficiently than using ‐‐cacert if\n"
"              the ‐‐cacert file contains many CA certificates.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐f/‐‐fail\n"
"              (HTTP)  Fail  silently (no output at all) on server errors. This\n"
);
 puts(
"              is mostly done like this to better enable scripts etc to  better\n"
"              deal  with  failed  attempts. In normal cases when a HTTP server\n"
"              fails to deliver a document, it returns a HTML document  stating\n"
"              so  (which  often  also  describes why and more). This flag will\n"
"              prevent curl from outputting that and fail silently instead.\n"
"\n"
"              If this option is used twice,  the  second  will  again  disable\n"
);
 puts(
"              silent failure.\n"
"\n"
"       ‐F/‐‐form <name=content>\n"
"              (HTTP)  This  lets curl emulate a filled in form in which a user\n"
"              has pressed the submit button. This causes  curl  to  POST  data\n"
"              using the content‐type multipart/form‐data according to RFC1867.\n"
"              This enables uploading of binary files etc. To force  the  ’con‐\n"
"              tent’ part to be be a file, prefix the file name with an @ sign.\n"
);
 puts(
"              To just get the content part from a file, prefix the  file  name\n"
"              with the letter <. The difference between @ and < is then that @\n"
"              makes a file get attached in the post as a  file  upload,  while\n"
"              the < makes a text field and just get the contents for that text\n"
"              field from a file.\n"
"\n"
"              Example, to send your password file to the server, where  ’pass‐\n"
);
 puts(
"              word’ is the name of the form‐field to which /etc/passwd will be\n"
"              the input:\n"
"\n"
"              [1mcurl [22m‐F password=@/etc/passwd www.mypasswords.com\n"
"\n"
"              To read the file’s content from stdin insted of a  file,  use  ‐\n"
"              where  the  file name should’ve been. This goes for both @ and <\n"
"              constructs.\n"
"\n"
"              You can also tell curl what Content‐Type to  use  for  the  file\n"
);
 puts(
"              upload part, by using ’type=’, in a manner similar to:\n"
"\n"
"              [1mcurl [22m‐F \"web=@index.html;type=text/html\" url.com\n"
"\n"
"              See further examples and details in the MANUAL.\n"
"\n"
"              This option can be used multiple times.\n"
"\n"
"       ‐g/‐‐globoff\n"
"              This option switches off the \"URL globbing parser\". When you set\n"
"              this option, you can specify URLs that contain the letters  {}[]\n"
);
 puts(
"              without  having them being interpreted by curl itself. Note that\n"
"              these letters are not normal legal URL contents but they  should\n"
"              be encoded according to the URI standard.\n"
"\n"
"       ‐G/‐‐get\n"
"              When  used,  this  option  will  make  all  data  specified with\n"
"              ‐d/‐‐data or ‐‐data‐binary to be used  in  a  HTTP  GET  request\n"
"              instead  of  the  POST request that otherwise would be used. The\n"
);
 puts(
"              data will be appended to the URL with a ’?’  separator.  (Option\n"
"              added in curl 7.9)\n"
"\n"
"              If  used  in  combination with ‐I, the POST data will instead be\n"
"              appended to the URL with a HEAD request.\n"
"\n"
"              If used multiple times, nothing special happens.\n"
"\n"
"       ‐h/‐‐help\n"
"              Usage help.\n"
"\n"
"       ‐H/‐‐header <header>\n"
"              (HTTP) Extra header to use when getting  a  web  page.  You  may\n"
);
 puts(
"              specify any number of extra headers. Note that if you should add\n"
"              a custom header that has the same name as one  of  the  internal\n"
"              ones  curl  would  use,  your externally set header will be used\n"
"              instead of the internal one. This allows you to make even trick‐\n"
"              ier  stuff  than  curl would normally do. You should not replace\n"
"              internally set  headers  without  knowing  perfectly  well  what\n"
);
 puts(
"              you’re doing. Replacing an internal header with one without con‐\n"
"              tent on the right side of the colon  will  prevent  that  header\n"
"              from appearing.\n"
"\n"
"              This  option  can  be  used multiple times to add/replace/remove\n"
"              multiple headers.\n"
"\n"
"       ‐i/‐‐include\n"
"              (HTTP) Include the HTTP‐header in the  output.  The  HTTP‐header\n"
"              includes  things  like  server‐name, date of the document, HTTP‐\n"
);
 puts(
"              version and more...\n"
"\n"
"              If this option is used twice,  the  second  will  again  disable\n"
"              header include.\n"
"\n"
"       ‐‐interface <name>\n"
"              Perform  an operation using a specified interface. You can enter\n"
"              interface name, IP address or host name. An example  could  look\n"
"              like:\n"
"\n"
"              [1mcurl ‐‐interface eth0:1 http://www.netscape.com/[0m\n"
"\n"
);
 puts(
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐I/‐‐head\n"
"              (HTTP/FTP) Fetch the HTTP‐header only! HTTP‐servers feature  the\n"
"              command  HEAD which this uses to get nothing but the header of a\n"
"              document. When used on a FTP file, curl displays the  file  size\n"
"              only.\n"
"\n"
"              If  this  option  is  used  twice, the second will again disable\n"
"              header only.\n"
"\n"
"       ‐j/‐‐junk‐session‐cookies\n"
);
 puts(
"              (HTTP) When curl is told to read cookies from a given file, this\n"
"              option  will  make  it  discard all \"session cookies\". This will\n"
"              basicly have the same effect as if a  new  session  is  started.\n"
"              Typical  browsers  always  discard  session cookies when they’re\n"
"              closed down. (Added in 7.9.7)\n"
"\n"
"              If this option is  used  several  times,  each  occurrence  will\n"
"              toggle this on/off.\n"
"\n"
"       ‐k/‐‐insecure\n"
);
 puts(
"              (SSL)  This  option explicitly allows curl to perform \"insecure\"\n"
"              SSL connections and transfers. Starting with curl 7.10, all  SSL\n"
"              connections  will be attempted to be made secure by using the CA\n"
"              certificate bundle installed by default. This makes all  connec‐\n"
"              tions  considered  \"insecure\"  to  fail  unless ‐k/‐‐insecure is\n"
"              used.\n"
"\n"
"              This option is ignored if ‐‐cacert or ‐‐capath is used!\n"
"\n"
);
 puts(
"              If this option is used twice, the second time will again disable\n"
"              it.\n"
"\n"
"       ‐‐krb4 <level>\n"
"              (FTP) Enable kerberos4 authentication and use. The level must be\n"
"              entered and should be one of ’clear’, ’safe’, ’confidential’  or\n"
"              ’private’.  Should  you  use  a  level that is not one of these,\n"
"              ’private’ will instead be used.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
);
 puts(
"       ‐K/‐‐config <config file>\n"
"              Specify  which config file to read curl arguments from. The con‐\n"
"              fig file is a text file in which command line arguments  can  be\n"
"              written  which  then will be used as if they were written on the\n"
"              actual command line. Options and their parameters must be speci‐\n"
"              fied  on  the same config file line. If the parameter is to con‐\n"
);
 puts(
"              tain white spaces, the parameter must be inclosed within quotes.\n"
"              If  the  first  column  of a config line is a ’#’ character, the\n"
"              rest of the line will be treated as a comment.\n"
"\n"
"              Specify the filename as ’‐’ to make  curl  read  the  file  from\n"
"              stdin.\n"
"\n"
"              Note  that  to  be able to specify a URL in the config file, you\n"
"              need to specify it using the ‐‐url option,  and  not  by  simply\n"
);
 puts(
"              writing  the  URL  on its own line. So, it could look similar to\n"
"              this:\n"
"\n"
"              url = \"http://curl.haxx.se/docs/\"\n"
"\n"
"              This option can be used multiple times.\n"
"\n"
"       ‐‐limit‐rate <speed>\n"
"              Specify the maximum transfer rate you want  curl  to  use.  This\n"
"              feature is useful if you have a limited pipe and you’d like your\n"
"              transfer not use your entire bandwidth.\n"
"\n"
);
 puts(
"              The given speed is measured in bytes/second, unless a suffix  is\n"
"              appended.  Appending  ’k’  or ’K’ will count the number as kilo‐\n"
"              bytes, ’m’ or M’ makes it megabytes while ’g’ or  ’G’  makes  it\n"
"              gigabytes. Examples: 200K, 3m and 1G.\n"
"\n"
"              This option was introduced in curl 7.10.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐l/‐‐list‐only\n"
);
 puts(
"              (FTP) When listing an FTP directory, this switch forces a  name‐\n"
"              only  view.   Especially useful if you want to machine‐parse the\n"
"              contents of an FTP directory since  the  normal  directory  view\n"
"              doesn’t use a standard look or format.\n"
"\n"
"              This  option  causes  an  FTP NLST command to be sent.  Some FTP\n"
"              servers list only files in their response to NLST; they  do  not\n"
);
 puts(
"              include subdirectories and symbolic links.\n"
"\n"
"              If this option is used twice, the second will again disable list\n"
"              only.\n"
"\n"
"       ‐L/‐‐location\n"
"              (HTTP/HTTPS) If the server reports that the requested page has a\n"
"              different  location  (indicated  with the header line Location:)\n"
"              this flag will let curl attempt to reattempt the get on the  new\n"
"              place.  If  used  together  with  ‐i  or  ‐I,  headers  from all\n"
);
 puts(
"              requested pages will be shown. If this flag is used when  making\n"
"              a  HTTP  POST,  curl  will automatically switch to GET after the\n"
"              initial POST has been done.\n"
"\n"
"              If this option is used twice,  the  second  will  again  disable\n"
"              location following.\n"
"\n"
"       ‐m/‐‐max‐time <seconds>\n"
"              Maximum  time  in  seconds that you allow the whole operation to\n"
);
 puts(
"              take.  This is useful for preventing your batch jobs from  hang‐\n"
"              ing  for  hours  due to slow networks or links going down.  This\n"
"              doesn’t work fully in win32 systems.  See  also  the  [4m‐‐connect‐[0m\n"
"              [4mtimeout[24m option.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐M/‐‐manual\n"
"              Manual. Display the huge help text.\n"
"\n"
"       ‐n/‐‐netrc\n"
);
 puts(
"              Makes curl scan the [4m.netrc[24m file in the user’s home directory for\n"
"              login name and password. This is typically used for ftp on unix.\n"
"              If used with http, curl will  enable  user  authentication.  See\n"
"              [1mnetrc(4) [22mor [1mftp(1) [22mfor details on the file format. Curl will not\n"
"              complain if that file hasn’t the right  permissions  (it  should\n"
);
 puts(
"              not  be  world  nor  group  readable).  The environment variable\n"
"              \"HOME\" is used to find the home directory.\n"
"\n"
"              A quick and very simple example of how  to  setup  a  [4m.netrc[24m  to\n"
"              allow  curl to ftp to the machine host.domain.com with user name\n"
"              ’myself’ and password ’secret’ should look similar to:\n"
"\n"
"              [1mmachine host.domain.com login myself password secret[0m\n"
"\n"
);
 puts(
"              If this option is used twice,  the  second  will  again  disable\n"
"              netrc usage.\n"
"\n"
"       ‐N/‐‐no‐buffer\n"
"              Disables the buffering of the output stream. In normal work sit‐\n"
"              uations, curl will use a standard buffered  output  stream  that\n"
"              will have the effect that it will output the data in chunks, not\n"
"              necessarily exactly when the data arrives.   Using  this  option\n"
"              will disable that buffering.\n"
"\n"
);
 puts(
"              If  this  option  is used twice, the second will again switch on\n"
"              buffering.\n"
"\n"
"       ‐o/‐‐output <file>\n"
"              Write output to <file> instead of stdout. If you are using {} or\n"
"              []  to  fetch  multiple documents, you can use ’#’ followed by a\n"
"              number in the <file> specifier. That variable will  be  replaced\n"
"              with the current string for the URL being fetched. Like in:\n"
"\n"
);
 puts(
"                curl http://{one,two}.site.com ‐o \"file_#1.txt\"\n"
"\n"
"              or use several variables like:\n"
"\n"
"                curl http://{site,host}.host[1‐5].com ‐o \"#1_#2\"\n"
"\n"
"              You  may  use  this  option  as many times as you have number of\n"
"              URLs.\n"
"\n"
"              See also the ‐‐create‐dirs option to create the  local  directo‐\n"
"              ries dynamically.\n"
"\n"
"       ‐O/‐‐remote‐name\n"
"              Write  output to a local file named like the remote file we get.\n"
);
 puts(
"              (Only the file part of the remote file is used, the path is  cut\n"
"              off.)\n"
"\n"
"              You  may  use  this  option  as many times as you have number of\n"
"              URLs.\n"
"\n"
"       ‐p/‐‐proxytunnel\n"
"              When an HTTP proxy is used, this option will cause non‐HTTP pro‐\n"
"              tocols  to attempt to tunnel through the proxy instead of merely\n"
"              using it to do HTTP‐like operations. The tunnel approach is made\n"
);
 puts(
"              with  the HTTP proxy CONNECT request and requires that the proxy\n"
"              allows direct connect to the remote port number  curl  wants  to\n"
"              tunnel through to.\n"
"\n"
"              If  this  option  is  used  twice, the second will again disable\n"
"              proxy tunnel.\n"
"\n"
"       ‐P/‐‐ftpport <address>\n"
"              (FTP) Reverses the initiator/listener roles when connecting with\n"
"              ftp.  This  switch  makes  Curl  use the PORT command instead of\n"
);
 puts(
"              PASV. In practice, PORT tells  the  server  to  connect  to  the\n"
"              client’s  specified address and port, while PASV asks the server\n"
"              for an ip address and port to connect to.  <address>  should  be\n"
"              one of:\n"
"\n"
"              [1minterface   [22mi.e  \"eth0\"  to specify which interface’s IP address\n"
"                          you want to use  (Unix only)\n"
"\n"
"              [1mIP address  [22mi.e \"192.168.10.1\" to specify exact IP number\n"
"\n"
);
 puts(
"              [1mhost name   [22mi.e \"my.host.domain\" to specify machine\n"
"\n"
"              [1m‐           [22m(any single‐letter  string)  to  make  it  pick  the\n"
"                          machine’s default\n"
"\n"
"       If this option is used several times, the last one will be used.\n"
"\n"
"       ‐q     If  used  as  the  first  parameter  on  the  command  line, the\n"
"              [4m$HOME/.curlrc[24m file will not be read and used as a config file.\n"
"\n"
"       ‐Q/‐‐quote <comand>\n"
);
 puts(
"              (FTP) Send an arbitrary command to the  remote  FTP  server,  by\n"
"              using  the  QUOTE command of the server. Not all servers support\n"
"              this command, and the set of QUOTE commands are server specific!\n"
"              Quote  commands are sent BEFORE the transfer is taking place. To\n"
"              make commands take place after  a  successful  transfer,  prefix\n"
"              them  with a dash ’‐’. You may specify any amount of commands to\n"
);
 puts(
"              be run before and after the  transfer.  If  the  server  returns\n"
"              failure  for  one  of the commands, the entire operation will be\n"
"              aborted.\n"
"\n"
"              This option can be used multiple times.\n"
"\n"
"       ‐‐random‐file <file>\n"
"              (HTTPS) Specify the path name to file containing  what  will  be\n"
"              considered  as  random data. The data is used to seed the random\n"
);
 puts(
"              engine for SSL connections.  See also the [4m‐‐edg‐file[24m option.\n"
"\n"
"       ‐r/‐‐range <range>\n"
"              (HTTP/FTP) Retrieve a byte range (i.e a partial document) from a\n"
"              HTTP/1.1  or  FTP server. Ranges can be specified in a number of\n"
"              ways.\n"
"\n"
"              [1m0‐499     [22mspecifies the first 500 bytes\n"
"\n"
"              [1m500‐999   [22mspecifies the second 500 bytes\n"
"\n"
"              [1m‐500      [22mspecifies the last 500 bytes\n"
"\n"
);
 puts(
"              [1m9500      [22mspecifies the bytes from offset 9500 and forward\n"
"\n"
"              [1m0‐0,‐1    [22mspecifies the first and last byte only(*)(H)\n"
"\n"
"              [1m500‐700,600‐799[0m\n"
"                        specifies 300 bytes from offset 500(H)\n"
"\n"
"              [1m100‐199,500‐599[0m\n"
"                        specifies two separate 100 bytes ranges(*)(H)\n"
"\n"
"       (*) = NOTE that this will cause the server to reply  with  a  multipart\n"
"       response!\n"
"\n"
);
 puts(
"       You  should  also  be aware that many HTTP/1.1 servers do not have this\n"
"       feature enabled, so that when  you  attempt  to  get  a  range,  you’ll\n"
"       instead get the whole document.\n"
"\n"
"       FTP  range  downloads  only  support  the  simple  syntax  ’start‐stop’\n"
"       (optionally with one of the numbers omitted). It depends on the non‐RFC\n"
"       command SIZE.\n"
"\n"
"       If this option is used several times, the last one will be used.\n"
"\n"
"       ‐R/‐‐remote‐time\n"
);
 puts(
"              When  used,  this  will  make  libcurl attempt to figure out the\n"
"              timestamp of the remote file, and if that is available make  the\n"
"              local file get that same timestamp.\n"
"\n"
"              If  this  option  is  used  twice, the second time disables this\n"
"              again.\n"
"\n"
"       ‐s/‐‐silent\n"
"              Silent mode. Don’t show progress meter or error messages.  Makes\n"
"              Curl mute.\n"
"\n"
);
 puts(
"              If  this  option  is  used  twice, the second will again disable\n"
"              mute.\n"
"\n"
"       ‐S/‐‐show‐error\n"
"              When used with ‐s it makes curl show error message if it  fails.\n"
"\n"
"              If this option is used twice, the second will again disable show\n"
"              error.\n"
"\n"
"       ‐‐stderr <file>\n"
"              Redirect all writes to stderr to the specified file instead.  If\n"
"              the  file  name is a plain ’‐’, it is instead written to stdout.\n"
);
 puts(
"              This option has no point when you’re using a shell  with  decent\n"
"              redirecting capabilities.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐t/‐‐telnet‐option <OPT=val>\n"
"              Pass options to the telnet protocol. Supported options are:\n"
"\n"
"              TTYPE=<term> Sets the terminal type.\n"
"\n"
"              XDISPLOC=<X display> Sets the X display location.\n"
"\n"
"              NEW_ENV=<var,val> Sets an environment variable.\n"
"\n"
);
 puts(
"       ‐T/‐‐upload‐file <file>\n"
"              This transfers the specified local file to the  remote  URL.  If\n"
"              there is no file part in the specified URL, Curl will append the\n"
"              local file name. NOTE that you must use a trailing / on the last\n"
"              directory  to really prove to Curl that there is no file name or\n"
"              curl will think that your last directory name is the remote file\n"
);
 puts(
"              name to use. That will most likely cause the upload operation to\n"
"              fail. If this is used on a http(s) server, the PUT command  will\n"
"              be used.\n"
"\n"
"              Use  the file name \"‐\" (a single dash) to use stdin instead of a\n"
"              given file.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐‐trace <file>\n"
"              Enables  a  full  trace  dump of all incoming and outgoing data,\n"
);
 puts(
"              including descriptive information, to the given output file. Use\n"
"              \"‐\" as filename to have the output sent to stdout.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"              (Added in curl 7.9.7)\n"
"\n"
"       ‐‐trace‐ascii <file>\n"
"              Enables a full trace dump of all  incoming  and  outgoing  data,\n"
"              including descriptive information, to the given output file. Use\n"
);
 puts(
"              \"‐\" as filename to have the output sent to stdout.\n"
"\n"
"              This is very similar to ‐‐trace, but leaves out the hex part and\n"
"              only  shows  the ASCII part of the dump. It makes smaller output\n"
"              that might be easier to read for untrained humans.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"              (Added in curl 7.9.7)\n"
"\n"
"       ‐u/‐‐user <user:password>\n"
);
 puts(
"              Specify  user and password to use when fetching. Read the MANUAL\n"
"              for detailed examples of how to use  this.  If  no  password  is\n"
"              specified, curl will ask for it interactively.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐U/‐‐proxy‐user <user:password>\n"
"              Specify user and password to use for Proxy authentication. If no\n"
"              password is specified, curl will ask for it interactively.\n"
"\n"
);
 puts(
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐‐url <URL>\n"
"              Specify a URL to fetch. This option is  mostly  handy  when  you\n"
"              want to specify URL(s) in a config file.\n"
"\n"
"              This  option  may  be used any number of times. To control where\n"
"              this URL is written, use the [4m‐o[24m or the [4m‐O[24m options.\n"
"\n"
"       ‐v/‐‐verbose\n"
"              Makes the fetching more  verbose/talkative.  Mostly  usable  for\n"
);
 puts(
"              debugging.  Lines starting with ’>’ means data sent by curl, ’<’\n"
"              means data received by curl that is hidden in normal  cases  and\n"
"              lines  starting with ’*’ means additional info provided by curl.\n"
"\n"
"              Note that if you  want  to  see  HTTP  headers  in  the  output,\n"
"              [4m‐i/‐‐include[24m might be option you’re looking for.\n"
"\n"
"              If  you think this option still doesn’t give you enough details,\n"
);
 puts(
"              consider using [4m‐‐trace[24m or [4m‐‐trace‐ascii[24m instead.\n"
"\n"
"              If this option is used twice, the second will again disable ver‐\n"
"              bose.\n"
"\n"
"       ‐V/‐‐version\n"
"              Displays  the  full version of curl, libcurl and other 3rd party\n"
"              libraries linked with the executable.\n"
"\n"
"       ‐w/‐‐write‐out <format>\n"
"              Defines what to display after a completed and successful  opera‐\n"
);
 puts(
"              tion.  The  format is a string that may contain plain text mixed\n"
"              with any number of variables. The string  can  be  specified  as\n"
"              \"string\",  to  get  read  from  a particular file you specify it\n"
"              \"@filename\" and to tell curl to read the format from  stdin  you\n"
"              write \"@‐\".\n"
"\n"
"              The  variables  present in the output format will be substituted\n"
);
 puts(
"              by the value or text that curl thinks fit, as  described  below.\n"
"              All  variables are specified like %{variable_name} and to output\n"
"              a normal % you just write them like %%. You can output a newline\n"
"              by  using \\n, a carriage return with \\r and a tab space with \\t.\n"
"\n"
"              [1mNOTE: [22mThe %‐letter is a special letter in the win32‐environment,\n"
"              where  all  occurrences  of  %  must  be doubled when using this\n"
);
 puts(
"              option.\n"
"\n"
"              Available variables are at this point:\n"
"\n"
"              [1murl_effective  [22mThe URL that was fetched  last.  This  is  mostly\n"
"                             meaningful  if  you’ve  told curl to follow loca‐\n"
"                             tion: headers.\n"
"\n"
"              [1mhttp_code      [22mThe numerical code that was  found  in  the  last\n"
"                             retrieved HTTP(S) page.\n"
"\n"
);
 puts(
"              [1mtime_total     [22mThe  total time, in seconds, that the full opera‐\n"
"                             tion lasted. The time will be displayed with mil‐\n"
"                             lisecond resolution.\n"
"\n"
"              [1mtime_namelookup[0m\n"
"                             The  time,  in  seconds,  it  took from the start\n"
"                             until the name resolving was completed.\n"
"\n"
"              [1mtime_connect   [22mThe time, in seconds,  it  took  from  the  start\n"
);
 puts(
"                             until  the  connect to the remote host (or proxy)\n"
"                             was completed.\n"
"\n"
"              [1mtime_pretransfer[0m\n"
"                             The time, in seconds,  it  took  from  the  start\n"
"                             until  the  file transfer is just about to begin.\n"
"                             This includes all pre‐transfer commands and nego‐\n"
"                             tiations that are specific to the particular pro‐\n"
);
 puts(
"                             tocol(s) involved.\n"
"\n"
"              [1mtime_starttransfer[0m\n"
"                             The time, in seconds,  it  took  from  the  start\n"
"                             until  the  first byte is just about to be trans‐\n"
"                             fered. This includes  time_pretransfer  and  also\n"
"                             the  time  the  server  needs  to  calculate  the\n"
"                             result.\n"
"\n"
);
 puts(
"              [1msize_download  [22mThe total amount of bytes that were downloaded.\n"
"\n"
"              [1msize_upload    [22mThe total amount of bytes that were uploaded.\n"
"\n"
"              [1msize_header    [22mThe total amount of bytes of the downloaded head‐\n"
"                             ers.\n"
"\n"
"              [1msize_request   [22mThe  total  amount of bytes that were sent in the\n"
"                             HTTP request.\n"
"\n"
);
 puts(
"              [1mspeed_download [22mThe average download speed that curl measured for\n"
"                             the complete download.\n"
"\n"
"              [1mspeed_upload   [22mThe  average  upload speed that curl measured for\n"
"                             the complete upload.\n"
"\n"
"              [1mcontent_type   [22mThe Content‐Type of the  requested  document,  if\n"
"                             there was any. (Added in 7.9.5)\n"
"\n"
);
 puts(
"       If this option is used several times, the last one will be used.\n"
"\n"
"       ‐x/‐‐proxy <proxyhost[:port]>\n"
"              Use  specified  HTTP proxy. If the port number is not specified,\n"
"              it is assumed at port 1080.\n"
"\n"
"              This option overrides existing environment variables  that  sets\n"
"              proxy  to  use.  If  there’s  an  environment variable setting a\n"
"              proxy, you can set proxy to \"\" to override it.\n"
"\n"
);
 puts(
"              [1mNote [22mthat all operations that are performed over  a  HTTP  proxy\n"
"              will  transparantly  be converted to HTTP. It means that certain\n"
"              protocol specific operations might not be available. This is not\n"
"              the  case  if you can tunnel through the proxy, as done with the\n"
"              [4m‐p/‐‐proxytunnel[24m option.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐X/‐‐request <command>\n"
);
 puts(
"              (HTTP) Specifies a custom request to use when communicating with\n"
"              the HTTP server.  The specified request will be used instead  of\n"
"              the  standard  GET.  Read the HTTP 1.1 specification for details\n"
"              and explanations.\n"
"\n"
"              (FTP) Specifies a custom FTP command to use instead of LIST when\n"
"              doing file lists with ftp.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
);
 puts(
"       ‐y/‐‐speed‐time <time>\n"
"              If a download is slower than speed‐limit bytes per second during\n"
"              a speed‐time period, the download gets aborted. If speed‐time is\n"
"              used, the default speed‐limit will be 1 unless set with ‐y.\n"
"\n"
"              This option controls transfers and thus  will  not  affect  slow\n"
"              connects  etc.  If this is a concern for you, try the [4m‐‐connect‐[0m\n"
"              [4mtimeout[24m option.\n"
"\n"
);
 puts(
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐Y/‐‐speed‐limit <speed>\n"
"              If a download is slower than this given speed, in bytes per sec‐\n"
"              ond, for speed‐time seconds it gets aborted. speed‐time  is  set\n"
"              with ‐Y and is 30 if not set.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐z/‐‐time‐cond <date expression>\n"
);
 puts(
"              (HTTP) Request to get a file that has been modified  later  than\n"
"              the  given  time  and date, or one that has been modified before\n"
"              that time. The date expression can be all sorts of date  strings\n"
"              or  if  it  doesn’t match any internal ones, it tries to get the\n"
"              time from a given file name instead!  See  the  [1mGNU  date(1)  [22mor\n"
"              [1mcurl_getdate(3) [22mman pages for date expression details.\n"
"\n"
);
 puts(
"              Start the date expression with a dash (‐) to make it request for\n"
"              a document that is older than the given date/time, default is  a\n"
"              document that is newer than the specified date/time.\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐Z/‐‐max‐redirs <num>\n"
"              Set  maximum  number  of  redirection‐followings   allowed.   If\n"
"              ‐L/‐‐location  is  used, this option can be used to prevent curl\n"
);
 puts(
"              from following redirections \"in absurdum\".\n"
"\n"
"              If this option is used several times, the last one will be used.\n"
"\n"
"       ‐3/‐‐sslv3\n"
"              (HTTPS) Forces curl to use SSL version 3 when negotiating with a\n"
"              remote SSL server.\n"
"\n"
"       ‐2/‐‐sslv2\n"
"              (HTTPS) Forces curl to use SSL version 2 when negotiating with a\n"
"              remote SSL server.\n"
"\n"
"       ‐0/‐‐http1.0\n"
);
 puts(
"              (HTTP)  Forces curl to issue its requests using HTTP 1.0 instead\n"
"              of using its internally preferred: HTTP 1.1.\n"
"\n"
"       ‐#/‐‐progress‐bar\n"
"              Make curl display progress information as a progress bar instead\n"
"              of the default statistics.\n"
"\n"
"              If  this option is used twice, the second will again disable the\n"
"              progress bar.\n"
"\n"
"[1mFILES[0m\n"
"       [4m~/.curlrc[0m\n"
"              Default config file.\n"
"\n"
"[1mENVIRONMENT[0m\n"
);
 puts(
"       http_proxy [protocol://]<host>[:port]\n"
"              Sets proxy server to use for HTTP.\n"
"\n"
"       HTTPS_PROXY [protocol://]<host>[:port]\n"
"              Sets proxy server to use for HTTPS.\n"
"\n"
"       FTP_PROXY [protocol://]<host>[:port]\n"
"              Sets proxy server to use for FTP.\n"
"\n"
"       GOPHER_PROXY [protocol://]<host>[:port]\n"
"              Sets proxy server to use for GOPHER.\n"
"\n"
"       ALL_PROXY [protocol://]<host>[:port]\n"
);
 puts(
"              Sets proxy server to use if no protocol‐specific proxy is set.\n"
"\n"
"       NO_PROXY <comma‐separated list of hosts>\n"
"              list of host names that shouldn’t go through any proxy.  If  set\n"
"              to a asterisk\n"
"\n"
"[1mEXIT CODES[0m\n"
"       There  exists  a bunch of different error codes and their corresponding\n"
"       error messages that may appear during bad conditions. At  the  time  of\n"
"       this writing, the exit codes are:\n"
"\n"
);
 puts(
"       1      Unsupported protocol. This build of curl has no support for this\n"
"              protocol.\n"
"\n"
"       2      Failed to initialize.\n"
"\n"
"       3      URL malformat. The syntax was not correct.\n"
"\n"
"       4      URL user malformatted. The user‐part of the URL syntax  was  not\n"
"              correct.\n"
"\n"
"       5      Couldn’t  resolve  proxy.  The  given  proxy  host  could not be\n"
"              resolved.\n"
"\n"
"       6      Couldn’t resolve host. The given remote host was not resolved.\n"
"\n"
);
 puts(
"       7      Failed to connect to host.\n"
"\n"
"       8      FTP weird server reply.  The  server  sent  data  curl  couldn’t\n"
"              parse.\n"
"\n"
"       9      FTP access denied. The server denied login.\n"
"\n"
"       10     FTP  user/password  incorrect.  Either  one  or  both  were  not\n"
"              accepted by the server.\n"
"\n"
"       11     FTP weird PASS reply. Curl couldn’t parse the reply sent to  the\n"
"              PASS request.\n"
"\n"
);
 puts(
"       12     FTP  weird USER reply. Curl couldn’t parse the reply sent to the\n"
"              USER request.\n"
"\n"
"       13     FTP weird PASV reply, Curl couldn’t parse the reply sent to  the\n"
"              PASV request.\n"
"\n"
"       14     FTP  weird  227  format.  Curl  couldn’t  parse the 227‐line the\n"
"              server sent.\n"
"\n"
"       15     FTP can’t get host. Couldn’t resolve the host IP we got  in  the\n"
"              227‐line.\n"
"\n"
);
 puts(
"       16     FTP  can’t reconnect. Couldn’t connect to the host we got in the\n"
"              227‐line.\n"
"\n"
"       17     FTP couldn’t set binary.  Couldn’t  change  transfer  method  to\n"
"              binary.\n"
"\n"
"       18     Partial file. Only a part of the file was transfered.\n"
"\n"
"       19     FTP  couldn’t download/access the given file, the RETR (or simi‐\n"
"              lar) command failed.\n"
"\n"
"       20     FTP write error. The transfer was reported bad by the server.\n"
"\n"
);
 puts(
"       21     FTP quote error. A quote command returned error from the server.\n"
"\n"
"       22     HTTP  page  not  retrieved.  The  requested url was not found or\n"
"              returned another error with the HTTP error  code  being  400  or\n"
"              above. This return code only appears if ‐‐fail is used.\n"
"\n"
"       23     Write  error.  Curl couldn’t write data to a local filesystem or\n"
"              similar.\n"
"\n"
"       24     Malformat user. User name badly specified.\n"
"\n"
);
 puts(
"       25     FTP couldn’t STOR file. The server denied the STOR operation.\n"
"\n"
"       26     Read error. Various reading problems.\n"
"\n"
"       27     Out of memory. A memory allocation request failed.\n"
"\n"
"       28     Operation timeout. The specified  time‐out  period  was  reached\n"
"              according to the conditions.\n"
"\n"
"       29     FTP couldn’t set ASCII. The server returned an unknown reply.\n"
"\n"
"       30     FTP PORT failed. The PORT command failed.\n"
"\n"
);
 puts(
"       31     FTP couldn’t use REST. The REST command failed.\n"
"\n"
"       32     FTP  couldn’t  use SIZE. The SIZE command failed. The command is\n"
"              an extension to the original FTP spec RFC 959.\n"
"\n"
"       33     HTTP range error. The range \"command\" didn’t work.\n"
"\n"
"       34     HTTP post error. Internal post‐request generation error.\n"
"\n"
"       35     SSL connect error. The SSL handshaking failed.\n"
"\n"
"       36     FTP bad download resume. Couldn’t continue  an  earlier  aborted\n"
);
 puts(
"              download.\n"
"\n"
"       37     FILE couldn’t read file. Failed to open the file. Permissions?\n"
"\n"
"       38     LDAP cannot bind. LDAP bind operation failed.\n"
"\n"
"       39     LDAP search failed.\n"
"\n"
"       40     Library not found. The LDAP library was not found.\n"
"\n"
"       41     Function not found. A required LDAP function was not found.\n"
"\n"
"       42     Aborted by callback. An application told curl to abort the oper‐\n"
"              ation.\n"
"\n"
);
 puts(
"       43     Internal error. A function was called with a bad parameter.\n"
"\n"
"       44     Internal error. A function was called in a bad order.\n"
"\n"
"       45     Interface error. A specified outgoing  interface  could  not  be\n"
"              used.\n"
"\n"
"       46     Bad  password  entered.  An error was signaled when the password\n"
"              was entered.\n"
"\n"
"       47     Too many redirects. When following redirects, curl hit the maxi‐\n"
"              mum amount.\n"
"\n"
);
 puts(
"       48     Unknown TELNET option specified.\n"
"\n"
"       49     Malformed telnet option.\n"
"\n"
"       51     The remote peer’s SSL certificate wasn’t ok\n"
"\n"
"       52     The  server  didn’t  reply anything, which here is considered an\n"
"              error.\n"
"\n"
"       53     SSL crypto engine not found\n"
"\n"
"       54     Cannot set SSL crypto engine as default\n"
"\n"
"       55     Failed sending network data\n"
"\n"
"       56     Failure in receiving network data\n"
"\n"
"       57     Share is in use (internal error)\n"
"\n"
);
 puts(
"       58     Problem with the local certificate\n"
"\n"
"       59     Couldn’t use specified SSL cipher\n"
"\n"
"       60     Problem with the CA cert (path? permission?)\n"
"\n"
"       61     Unrecognized transfer encoding\n"
"\n"
"       XX     There will appear more error codes here in future releases.  The\n"
"              existing ones are meant to never change.\n"
"\n"
"[1mBUGS[0m\n"
"       If you do find bugs, mail them to curl‐bug@haxx.se.\n"
"\n"
"[1mAUTHORS / CONTRIBUTORS[0m\n"
);
 puts(
"       Daniel  Stenberg is the main author, but the whole list of contributors\n"
"       is found in the separate THANKS file.\n"
"\n"
"[1mWWW[0m\n"
"       http://curl.haxx.se\n"
"\n"
"[1mFTP[0m\n"
"       ftp://ftp.sunet.se/pub/www/utilities/curl/\n"
"\n"
"[1mSEE ALSO[0m\n"
"       [1mftp[22m(1), [1mwget[22m(1), [1msnarf[22m(1)\n"
"\n"
"LATEST VERSION\n"
"\n"
"  You always find news about what's going on as well as the latest versions\n"
"  from the curl web pages, located at:\n"
"\n"
"        http://curl.haxx.se\n"
"\n"
"SIMPLE USAGE\n"
"\n"
);
 puts(
"  Get the main page from netscape's web-server:\n"
"\n"
"        curl http://www.netscape.com/\n"
"\n"
"  Get the root README file from funet's ftp-server:\n"
"\n"
"        curl ftp://ftp.funet.fi/README\n"
"\n"
"  Get a web page from a server using port 8000:\n"
"\n"
"        curl http://www.weirdserver.com:8000/\n"
"\n"
"  Get a list of the root directory of an FTP site:\n"
"\n"
"        curl ftp://cool.haxx.se/\n"
"\n"
"  Get a gopher document from funet's gopher server:\n"
"\n"
"        curl gopher://gopher.funet.fi\n"
"\n"
);
 puts(
"  Get the definition of curl from a dictionary:\n"
"\n"
"        curl dict://dict.org/m:curl\n"
"\n"
"  Fetch two documents at once:\n"
"\n"
"        curl ftp://cool.haxx.se/ http://www.weirdserver.com:8000/\n"
"\n"
"DOWNLOAD TO A FILE\n"
"\n"
"  Get a web page and store in a local file:\n"
"\n"
"        curl -o thatpage.html http://www.netscape.com/\n"
"\n"
"  Get a web page and store in a local file, make the local file get the name\n"
"  of the remote document (if no file name part is specified in the URL, this\n"
"  will fail):\n"
"\n"
);
 puts(
"        curl -O http://www.netscape.com/index.html\n"
"\n"
"  Fetch two files and store them with their remote names:\n"
"\n"
"        curl -O www.haxx.se/index.html -O curl.haxx.se/download.html\n"
"\n"
"USING PASSWORDS\n"
"\n"
" FTP\n"
"\n"
"   To ftp files using name+passwd, include them in the URL like:\n"
"\n"
"        curl ftp://name:passwd@machine.domain:port/full/path/to/file\n"
"\n"
"   or specify them with the -u flag like\n"
"\n"
"        curl -u name:passwd ftp://machine.domain:port/full/path/to/file\n"
"\n"
" HTTP\n"
"\n"
);
 puts(
"   The HTTP URL doesn't support user and password in the URL string. Curl\n"
"   does support that anyway to provide a ftp-style interface and thus you can\n"
"   pick a file like:\n"
"\n"
"        curl http://name:passwd@machine.domain/full/path/to/file\n"
"\n"
"   or specify user and password separately like in\n"
"\n"
"        curl -u name:passwd http://machine.domain/full/path/to/file\n"
"\n"
"   NOTE! Since HTTP URLs don't support user and password, you can't use that\n"
);
 puts(
"   style when using Curl via a proxy. You _must_ use the -u style fetch\n"
"   during such circumstances.\n"
"\n"
" HTTPS\n"
"\n"
"   Probably most commonly used with private certificates, as explained below.\n"
"\n"
" GOPHER\n"
"\n"
"   Curl features no password support for gopher.\n"
"\n"
"PROXY\n"
"\n"
" Get an ftp file using a proxy named my-proxy that uses port 888:\n"
"\n"
"        curl -x my-proxy:888 ftp://ftp.leachsite.com/README\n"
"\n"
" Get a file from a HTTP server that requires user and password, using the\n"
" same proxy as above:\n"
);
 puts(
"\n"
"        curl -u user:passwd -x my-proxy:888 http://www.get.this/\n"
"\n"
" Some proxies require special authentication. Specify by using -U as above:\n"
"\n"
"        curl -U user:passwd -x my-proxy:888 http://www.get.this/\n"
"\n"
" See also the environment variables Curl support that offer further proxy\n"
" control.\n"
"\n"
"RANGES\n"
"\n"
"  With HTTP 1.1 byte-ranges were introduced. Using this, a client can request\n"
"  to get only one or more subparts of a specified document. Curl supports\n"
"  this with the -r flag.\n"
"\n"
);
 puts(
"  Get the first 100 bytes of a document:\n"
"\n"
"        curl -r 0-99 http://www.get.this/\n"
"\n"
"  Get the last 500 bytes of a document:\n"
"\n"
"        curl -r -500 http://www.get.this/\n"
"\n"
"  Curl also supports simple ranges for FTP files as well. Then you can only\n"
"  specify start and stop position.\n"
"\n"
"  Get the first 100 bytes of a document using FTP:\n"
"\n"
"        curl -r 0-99 ftp://www.get.this/README  \n"
"\n"
"UPLOADING\n"
"\n"
" FTP\n"
"\n"
"  Upload all data on stdin to a specified ftp site:\n"
"\n"
);
 puts(
"        curl -T - ftp://ftp.upload.com/myfile\n"
"\n"
"  Upload data from a specified file, login with user and password:\n"
"\n"
"        curl -T uploadfile -u user:passwd ftp://ftp.upload.com/myfile\n"
"\n"
"  Upload a local file to the remote site, and use the local file name remote\n"
"  too:\n"
" \n"
"        curl -T uploadfile -u user:passwd ftp://ftp.upload.com/\n"
"\n"
"  Upload a local file to get appended to the remote file using ftp:\n"
"\n"
"        curl -T localfile -a ftp://ftp.upload.com/remotefile\n"
"\n"
);
 puts(
"  Curl also supports ftp upload through a proxy, but only if the proxy is\n"
"  configured to allow that kind of tunneling. If it does, you can run curl in\n"
"  a fashion similar to:\n"
"\n"
"        curl --proxytunnel -x proxy:port -T localfile ftp.upload.com\n"
"\n"
" HTTP\n"
"\n"
"  Upload all data on stdin to a specified http site:\n"
"\n"
"        curl -T - http://www.upload.com/myfile\n"
"\n"
"  Note that the http server must've been configured to accept PUT before this\n"
"  can be done successfully.\n"
"\n"
);
 puts(
"  For other ways to do http data upload, see the POST section below.\n"
"\n"
"VERBOSE / DEBUG\n"
"\n"
"  If curl fails where it isn't supposed to, if the servers don't let you in,\n"
"  if you can't understand the responses: use the -v flag to get verbose\n"
"  fetching. Curl will output lots of info and what it sends and receives in\n"
"  order to let the user see all client-server interaction (but it won't show\n"
"  you the actual data).\n"
"\n"
"        curl -v ftp://ftp.upload.com/\n"
"\n"
);
 puts(
"  To get even more details and information on what curl does, try using the\n"
"  --trace or --trace-ascii options with a given file name to log to, like\n"
"  this:\n"
"\n"
"        curl --trace trace.txt www.haxx.se\n"
" \n"
"\n"
"DETAILED INFORMATION\n"
"\n"
"  Different protocols provide different ways of getting detailed information\n"
"  about specific files/documents. To get curl to show detailed information\n"
"  about a single file, you should use -I/--head option. It displays all\n"
);
 puts(
"  available info on a single file for HTTP and FTP. The HTTP information is a\n"
"  lot more extensive.\n"
"\n"
"  For HTTP, you can get the header information (the same as -I would show)\n"
"  shown before the data by using -i/--include. Curl understands the\n"
"  -D/--dump-header option when getting files from both FTP and HTTP, and it\n"
"  will then store the headers in the specified file.\n"
"\n"
"  Store the HTTP headers in a separate file (headers.txt in the example):\n"
"\n"
);
 puts(
"        curl --dump-header headers.txt curl.haxx.se\n"
"\n"
"  Note that headers stored in a separate file can be very useful at a later\n"
"  time if you want curl to use cookies sent by the server. More about that in\n"
"  the cookies section.\n"
"\n"
"POST (HTTP)\n"
"\n"
"  It's easy to post data using curl. This is done using the -d <data>\n"
"  option.  The post data must be urlencoded.\n"
"\n"
"  Post a simple \"name\" and \"phone\" guestbook.\n"
"\n"
"        curl -d \"name=Rafael%20Sagula&phone=3320780\" \\\n"
);
 puts(
"                http://www.where.com/guest.cgi\n"
"\n"
"  How to post a form with curl, lesson #1:\n"
"\n"
"  Dig out all the <input> tags in the form that you want to fill in. (There's\n"
"  a perl program called formfind.pl on the curl site that helps with this).\n"
"\n"
"  If there's a \"normal\" post, you use -d to post. -d takes a full \"post\n"
"  string\", which is in the format\n"
"\n"
"        <variable1>=<data1>&<variable2>=<data2>&...\n"
"\n"
"  The 'variable' names are the names set with \"name=\" in the <input> tags, and\n"
);
 puts(
"  the data is the contents you want to fill in for the inputs. The data *must*\n"
"  be properly URL encoded. That means you replace space with + and that you\n"
"  write weird letters with %XX where XX is the hexadecimal representation of\n"
"  the letter's ASCII code.\n"
"\n"
"  Example:\n"
"\n"
"  (page located at http://www.formpost.com/getthis/\n"
"\n"
"        <form action=\"post.cgi\" method=\"post\">\n"
"        <input name=user size=10>\n"
"        <input name=pass type=password size=10>\n"
);
 puts(
"        <input name=id type=hidden value=\"blablabla\">\n"
"        <input name=ding value=\"submit\">\n"
"        </form>\n"
"\n"
"  We want to enter user 'foobar' with password '12345'.\n"
"\n"
"  To post to this, you enter a curl command line like:\n"
"\n"
"        curl -d \"user=foobar&pass=12345&id=blablabla&dig=submit\"  (continues)\n"
"          http://www.formpost.com/getthis/post.cgi\n"
"\n"
"\n"
"  While -d uses the application/x-www-form-urlencoded mime-type, generally\n"
);
 puts(
"  understood by CGI's and similar, curl also supports the more capable\n"
"  multipart/form-data type. This latter type supports things like file upload.\n"
"\n"
"  -F accepts parameters like -F \"name=contents\". If you want the contents to\n"
"  be read from a file, use <@filename> as contents. When specifying a file,\n"
"  you can also specify the file content type by appending ';type=<mime type>'\n"
"  to the file name. You can also post the contents of several files in one\n"
);
 puts(
"  field.  For example, the field name 'coolfiles' is used to send three files,\n"
"  with different content types using the following syntax:\n"
"\n"
"        curl -F \"coolfiles=@fil1.gif;type=image/gif,fil2.txt,fil3.html\" \\\n"
"        http://www.post.com/postit.cgi\n"
"\n"
"  If the content-type is not specified, curl will try to guess from the file\n"
"  extension (it only knows a few), or use the previously specified type (from\n"
"  an earlier file if several files are specified in a list) or else it will\n"
);
 puts(
"  using the default type 'text/plain'.\n"
"\n"
"  Emulate a fill-in form with -F. Let's say you fill in three fields in a\n"
"  form. One field is a file name which to post, one field is your name and one\n"
"  field is a file description. We want to post the file we have written named\n"
"  \"cooltext.txt\". To let curl do the posting of this data instead of your\n"
"  favourite browser, you have to read the HTML source of the form page and\n"
);
 puts(
"  find the names of the input fields. In our example, the input field names\n"
"  are 'file', 'yourname' and 'filedescription'.\n"
"\n"
"        curl -F \"file=@cooltext.txt\" -F \"yourname=Daniel\" \\\n"
"             -F \"filedescription=Cool text file with cool text inside\" \\\n"
"             http://www.post.com/postit.cgi\n"
"\n"
"  To send two files in one post you can do it in two ways:\n"
"\n"
"  1. Send multiple files in a single \"field\" with a single field name:\n"
" \n"
"        curl -F \"pictures=@dog.gif,cat.gif\" \n"
" \n"
);
 puts(
"  2. Send two fields with two field names: \n"
"\n"
"        curl -F \"docpicture=@dog.gif\" -F \"catpicture=@cat.gif\" \n"
"\n"
"REFERRER\n"
"\n"
"  A HTTP request has the option to include information about which address\n"
"  that referred to actual page.  Curl allows you to specify the\n"
"  referrer to be used on the command line. It is especially useful to\n"
"  fool or trick stupid servers or CGI scripts that rely on that information\n"
"  being available or contain certain data.\n"
"\n"
);
 puts(
"        curl -e www.coolsite.com http://www.showme.com/\n"
"\n"
"  NOTE: The referer field is defined in the HTTP spec to be a full URL.\n"
"\n"
"USER AGENT\n"
"\n"
"  A HTTP request has the option to include information about the browser\n"
"  that generated the request. Curl allows it to be specified on the command\n"
"  line. It is especially useful to fool or trick stupid servers or CGI\n"
"  scripts that only accept certain browsers.\n"
"\n"
"  Example:\n"
"\n"
"  curl -A 'Mozilla/3.0 (Win95; I)' http://www.nationsbank.com/\n"
"\n"
);
 puts(
"  Other common strings:\n"
"    'Mozilla/3.0 (Win95; I)'     Netscape Version 3 for Windows 95\n"
"    'Mozilla/3.04 (Win95; U)'    Netscape Version 3 for Windows 95\n"
"    'Mozilla/2.02 (OS/2; U)'     Netscape Version 2 for OS/2\n"
"    'Mozilla/4.04 [en] (X11; U; AIX 4.2; Nav)'           NS for AIX\n"
"    'Mozilla/4.05 [en] (X11; U; Linux 2.0.32 i586)'      NS for Linux\n"
"\n"
"  Note that Internet Explorer tries hard to be compatible in every way:\n"
);
 puts(
"    'Mozilla/4.0 (compatible; MSIE 4.01; Windows 95)'    MSIE for W95\n"
"\n"
"  Mozilla is not the only possible User-Agent name:\n"
"    'Konqueror/1.0'             KDE File Manager desktop client\n"
"    'Lynx/2.7.1 libwww-FM/2.14' Lynx command line browser\n"
"\n"
"COOKIES\n"
"\n"
"  Cookies are generally used by web servers to keep state information at the\n"
"  client's side. The server sets cookies by sending a response line in the\n"
"  headers that looks like 'Set-Cookie: <data>' where the data part then\n"
);
 puts(
"  typically contains a set of NAME=VALUE pairs (separated by semicolons ';'\n"
"  like \"NAME1=VALUE1; NAME2=VALUE2;\"). The server can also specify for what\n"
"  path the \"cookie\" should be used for (by specifying \"path=value\"), when the\n"
"  cookie should expire (\"expire=DATE\"), for what domain to use it\n"
"  (\"domain=NAME\") and if it should be used on secure connections only\n"
"  (\"secure\").\n"
"\n"
"  If you've received a page from a server that contains a header like:\n"
);
 puts(
"        Set-Cookie: sessionid=boo123; path=\"/foo\";\n"
"\n"
"  it means the server wants that first pair passed on when we get anything in\n"
"  a path beginning with \"/foo\".\n"
"\n"
"  Example, get a page that wants my name passed in a cookie:\n"
"\n"
"        curl -b \"name=Daniel\" www.sillypage.com\n"
"\n"
"  Curl also has the ability to use previously received cookies in following\n"
"  sessions. If you get cookies from a server and store them in a file in a\n"
"  manner similar to:\n"
"\n"
);
 puts(
"        curl --dump-header headers www.example.com\n"
"\n"
"  ... you can then in a second connect to that (or another) site, use the\n"
"  cookies from the 'headers' file like:\n"
"\n"
"        curl -b headers www.example.com\n"
"\n"
"  While saving headers to a file is a working way to store cookies, it is\n"
"  however error-prone and not the prefered way to do this. Instead, make curl\n"
"  save the incoming cookies using the well-known netscape cookie format like\n"
"  this:\n"
"\n"
);
 puts(
"        curl -c cookies.txt www.example.com\n"
"\n"
"  Note that by specifying -b you enable the \"cookie awareness\" and with -L\n"
"  you can make curl follow a location: (which often is used in combination\n"
"  with cookies). So that if a site sends cookies and a location, you can\n"
"  use a non-existing file to trigger the cookie awareness like:\n"
"\n"
"        curl -L -b empty.txt www.example.com\n"
"\n"
"  The file to read cookies from must be formatted using plain HTTP headers OR\n"
);
 puts(
"  as netscape's cookie file. Curl will determine what kind it is based on the\n"
"  file contents.  In the above command, curl will parse the header and store\n"
"  the cookies received from www.example.com.  curl will send to the server the\n"
"  stored cookies which match the request as it follows the location.  The\n"
"  file \"empty.txt\" may be a non-existant file.\n"
"\n"
"  Alas, to both read and write cookies from a netscape cookie file, you can\n"
"  set both -b and -c to use the same file:\n"
"\n"
);
 puts(
"        curl -b cookies.txt -c cookies.txt www.example.com\n"
"\n"
"PROGRESS METER\n"
"\n"
"  The progress meter exists to show a user that something actually is\n"
"  happening. The different fields in the output have the following meaning:\n"
"\n"
"  % Total    % Received % Xferd  Average Speed          Time             Curr.\n"
"                                 Dload  Upload Total    Current  Left    Speed\n"
"  0  151M    0 38608    0     0   9406      0  4:41:43  0:00:04  4:41:39  9287\n"
"\n"
"  From left-to-right:\n"
);
 puts(
"   %             - percentage completed of the whole transfer\n"
"   Total         - total size of the whole expected transfer\n"
"   %             - percentage completed of the download\n"
"   Received      - currently downloaded amount of bytes\n"
"   %             - percentage completed of the upload\n"
"   Xferd         - currently uploaded amount of bytes\n"
"   Average Speed\n"
"   Dload         - the average transfer speed of the download\n"
"   Average Speed\n"
);
 puts(
"   Upload        - the average transfer speed of the upload\n"
"   Time Total    - expected time to complete the operation\n"
"   Time Current  - time passed since the invoke\n"
"   Time Left     - expected time left to completetion\n"
"   Curr.Speed    - the average transfer speed the last 5 seconds (the first\n"
"                   5 seconds of a transfer is based on less time of course.)\n"
"\n"
"  The -# option will display a totally different progress bar that doesn't\n"
"  need much explanation!\n"
"\n"
"SPEED LIMIT\n"
);
 puts(
"\n"
"  Curl allows the user to set the transfer speed conditions that must be met\n"
"  to let the transfer keep going. By using the switch -y and -Y you\n"
"  can make curl abort transfers if the transfer speed is below the specified\n"
"  lowest limit for a specified time.\n"
"\n"
"  To have curl abort the download if the speed is slower than 3000 bytes per\n"
"  second for 1 minute, run:\n"
"\n"
"        curl -Y 3000 -y 60 www.far-away-site.com\n"
"\n"
);
 puts(
"  This can very well be used in combination with the overall time limit, so\n"
"  that the above operatioin must be completed in whole within 30 minutes:\n"
"\n"
"        curl -m 1800 -Y 3000 -y 60 www.far-away-site.com\n"
"\n"
"  Forcing curl not to transfer data faster than a given rate is also possible,\n"
"  which might be useful if you're using a limited bandwidth connection and you\n"
"  don't want your transfer to use all of it (sometimes referred to as\n"
"  \"bandwith throttle\").\n"
"\n"
);
 puts(
"  Make curl transfer data no faster than 10 kilobytes per second:\n"
"\n"
"        curl --limit-rate 10K www.far-away-site.com\n"
"\n"
"    or\n"
"\n"
"        curl --limit-rate 10240 www.far-away-site.com\n"
"\n"
"  Or prevent curl from uploading data faster than 1 megabyte per second:\n"
"\n"
"        curl -T upload --limit-rate 1M ftp://uploadshereplease.com\n"
"\n"
"  When using the --limit-rate option, the transfer rate is regulated on a\n"
"  per-second basis, which will cause the total transfer speed to become lower\n"
);
 puts(
"  than the given number. Sometimes of course substantially lower, if your\n"
"  transfer stalls during periods.\n"
"\n"
"CONFIG FILE\n"
"\n"
"  Curl automatically tries to read the .curlrc file (or _curlrc file on win32\n"
"  systems) from the user's home dir on startup.\n"
"\n"
"  The config file could be made up with normal command line switches, but you\n"
"  can also specify the long options without the dashes to make it more\n"
"  readable. You can separate the options and the parameter with spaces, or\n"
);
 puts(
"  with = or :. Comments can be used within the file. If the first letter on a\n"
"  line is a '#'-letter the rest of the line is treated as a comment.\n"
"\n"
"  If you want the parameter to contain spaces, you must inclose the entire\n"
"  parameter within double quotes (\"). Within those quotes, you specify a\n"
"  quote as \\\".\n"
"\n"
"  NOTE: You must specify options and their arguments on the same line.\n"
"\n"
"  Example, set default time out and proxy in a config file:\n"
"\n"
"        # We want a 30 minute timeout:\n"
);
 puts(
"        -m 1800\n"
"        # ... and we use a proxy for all accesses:\n"
"        proxy = proxy.our.domain.com:8080\n"
"\n"
"  White spaces ARE significant at the end of lines, but all white spaces\n"
"  leading up to the first characters of each line are ignored.\n"
"\n"
"  Prevent curl from reading the default file by using -q as the first command\n"
"  line parameter, like:\n"
"\n"
"        curl -q www.thatsite.com\n"
"\n"
"  Force curl to get and display a local help page in case it is invoked\n"
);
 puts(
"  without URL by making a config file similar to:\n"
"\n"
"        # default url to get\n"
"        url = \"http://help.with.curl.com/curlhelp.html\"\n"
"\n"
"  You can specify another config file to be read by using the -K/--config\n"
"  flag. If you set config file name to \"-\" it'll read the config from stdin,\n"
"  which can be handy if you want to hide options from being visible in process\n"
"  tables etc:\n"
"\n"
"        echo \"user = user:passwd\" | curl -K - http://that.secret.site.com\n"
"\n"
"EXTRA HEADERS\n"
"\n"
);
 puts(
"  When using curl in your own very special programs, you may end up needing\n"
"  to pass on your own custom headers when getting a web page. You can do\n"
"  this by using the -H flag.\n"
"\n"
"  Example, send the header \"X-you-and-me: yes\" to the server when getting a\n"
"  page:\n"
"\n"
"        curl -H \"X-you-and-me: yes\" www.love.com\n"
"\n"
"  This can also be useful in case you want curl to send a different text in a\n"
"  header than it normally does. The -H header you specify then replaces the\n"
);
 puts(
"  header curl would normally send. If you replace an internal header with an\n"
"  empty one, you prevent that header from being sent. To prevent the Host:\n"
"  header from being used:\n"
"\n"
"        curl -H \"Host:\" www.server.com\n"
"\n"
"FTP and PATH NAMES\n"
"\n"
"  Do note that when getting files with the ftp:// URL, the given path is\n"
"  relative the directory you enter. To get the file 'README' from your home\n"
"  directory at your ftp site, do:\n"
"\n"
"        curl ftp://user:passwd@my.site.com/README\n"
"\n"
);
 puts(
"  But if you want the README file from the root directory of that very same\n"
"  site, you need to specify the absolute file name:\n"
"\n"
"        curl ftp://user:passwd@my.site.com//README\n"
"\n"
"  (I.e with an extra slash in front of the file name.)\n"
"\n"
"FTP and firewalls\n"
"\n"
"  The FTP protocol requires one of the involved parties to open a second\n"
"  connction as soon as data is about to get transfered. There are two ways to\n"
"  do this.\n"
"\n"
);
 puts(
"  The default way for curl is to issue the PASV command which causes the\n"
"  server to open another port and await another connection performed by the\n"
"  client. This is good if the client is behind a firewall that don't allow\n"
"  incoming connections.\n"
"\n"
"        curl ftp.download.com\n"
"\n"
"  If the server for example, is behind a firewall that don't allow connections\n"
"  on other ports than 21 (or if it just doesn't support the PASV command), the\n"
);
 puts(
"  other way to do it is to use the PORT command and instruct the server to\n"
"  connect to the client on the given (as parameters to the PORT command) IP\n"
"  number and port.\n"
"\n"
"  The -P flag to curl supports a few different options. Your machine may have\n"
"  several IP-addresses and/or network interfaces and curl allows you to select\n"
"  which of them to use. Default address can also be used:\n"
"\n"
"        curl -P - ftp.download.com\n"
"\n"
);
 puts(
"  Download with PORT but use the IP address of our 'le0' interface (this does\n"
"  not work on windows):\n"
"\n"
"        curl -P le0 ftp.download.com\n"
"\n"
"  Download with PORT but use 192.168.0.10 as our IP address to use:\n"
"\n"
"        curl -P 192.168.0.10 ftp.download.com\n"
"\n"
"NETWORK INTERFACE\n"
"\n"
"  Get a web page from a server using a specified port for the interface:\n"
"\n"
"	curl --interface eth0:1 http://www.netscape.com/\n"
"\n"
"  or\n"
"\n"
"	curl --interface 192.168.1.10 http://www.netscape.com/\n"
"\n"
"HTTPS\n"
"\n"
);
 puts(
"  Secure HTTP requires SSL libraries to be installed and used when curl is\n"
"  built. If that is done, curl is capable of retrieving and posting documents\n"
"  using the HTTPS procotol.\n"
"\n"
"  Example:\n"
"\n"
"        curl https://www.secure-site.com\n"
"\n"
"  Curl is also capable of using your personal certificates to get/post files\n"
"  from sites that require valid certificates. The only drawback is that the\n"
"  certificate needs to be in PEM-format. PEM is a standard and open format to\n"
);
 puts(
"  store certificates with, but it is not used by the most commonly used\n"
"  browsers (Netscape and MSIE both use the so called PKCS#12 format). If you\n"
"  want curl to use the certificates you use with your (favourite) browser, you\n"
"  may need to download/compile a converter that can convert your browser's\n"
"  formatted certificates to PEM formatted ones. This kind of converter is\n"
"  included in recent versions of OpenSSL, and for older versions Dr Stephen\n"
);
 puts(
"  N. Henson has written a patch for SSLeay that adds this functionality. You\n"
"  can get his patch (that requires an SSLeay installation) from his site at:\n"
"  http://www.drh-consultancy.demon.co.uk/\n"
"\n"
"  Example on how to automatically retrieve a document using a certificate with\n"
"  a personal password:\n"
"\n"
"        curl -E /path/to/cert.pem:password https://secure.site.com/\n"
"\n"
"  If you neglect to specify the password on the command line, you will be\n"
);
 puts(
"  prompted for the correct password before any data can be received.\n"
"\n"
"  Many older SSL-servers have problems with SSLv3 or TLS, that newer versions\n"
"  of OpenSSL etc is using, therefore it is sometimes useful to specify what\n"
"  SSL-version curl should use. Use -3, -2 or -1 to specify that exact SSL\n"
"  version to use (for SSLv3, SSLv2 or TLSv1 respectively):\n"
"\n"
"        curl -2 https://secure.site.com/\n"
"\n"
"  Otherwise, curl will first attempt to use v3 and then v2.\n"
"\n"
);
 puts(
"  To use OpenSSL to convert your favourite browser's certificate into a PEM\n"
"  formatted one that curl can use, do something like this (assuming netscape,\n"
"  but IE is likely to work similarly):\n"
"\n"
"    You start with hitting the 'security' menu button in netscape. \n"
"\n"
"    Select 'certificates->yours' and then pick a certificate in the list \n"
"\n"
"    Press the 'export' button \n"
"\n"
"    enter your PIN code for the certs \n"
"\n"
"    select a proper place to save it \n"
"\n"
);
 puts(
"    Run the 'openssl' application to convert the certificate. If you cd to the\n"
"    openssl installation, you can do it like:\n"
"\n"
"     # ./apps/openssl pkcs12 -in [file you saved] -clcerts -out [PEMfile]\n"
"\n"
"\n"
"RESUMING FILE TRANSFERS\n"
"\n"
" To continue a file transfer where it was previously aborted, curl supports\n"
" resume on http(s) downloads as well as ftp uploads and downloads.\n"
"\n"
" Continue downloading a document:\n"
"\n"
"        curl -C - -o file ftp://ftp.server.com/path/file\n"
"\n"
);
 puts(
" Continue uploading a document(*1):\n"
"\n"
"        curl -C - -T file ftp://ftp.server.com/path/file\n"
"\n"
" Continue downloading a document from a web server(*2):\n"
"\n"
"        curl -C - -o file http://www.server.com/\n"
"\n"
" (*1) = This requires that the ftp server supports the non-standard command\n"
"        SIZE. If it doesn't, curl will say so.\n"
"\n"
" (*2) = This requires that the web server supports at least HTTP/1.1. If it\n"
"        doesn't, curl will say so.\n"
"\n"
"TIME CONDITIONS\n"
"\n"
);
 puts(
" HTTP allows a client to specify a time condition for the document it\n"
" requests. It is If-Modified-Since or If-Unmodified-Since. Curl allow you to\n"
" specify them with the -z/--time-cond flag.\n"
"\n"
" For example, you can easily make a download that only gets performed if the\n"
" remote file is newer than a local copy. It would be made like:\n"
"\n"
"        curl -z local.html http://remote.server.com/remote.html\n"
"\n"
" Or you can download a file only if the local file is newer than the remote\n"
);
 puts(
" one. Do this by prepending the date string with a '-', as in:\n"
"\n"
"        curl -z -local.html http://remote.server.com/remote.html\n"
"\n"
" You can specify a \"free text\" date as condition. Tell curl to only download\n"
" the file if it was updated since yesterday:\n"
"\n"
"        curl -z yesterday http://remote.server.com/remote.html\n"
"\n"
" Curl will then accept a wide range of date formats. You always make the date\n"
" check the other way around by prepending it with a dash '-'.\n"
"\n"
"DICT\n"
"\n"
"  For fun try\n"
"\n"
);
 puts(
"        curl dict://dict.org/m:curl\n"
"        curl dict://dict.org/d:heisenbug:jargon\n"
"        curl dict://dict.org/d:daniel:web1913\n"
"\n"
"  Aliases for 'm' are 'match' and 'find', and aliases for 'd' are 'define'\n"
"  and 'lookup'. For example,\n"
"\n"
"        curl dict://dict.org/find:curl\n"
"\n"
"  Commands that break the URL description of the RFC (but not the DICT\n"
"  protocol) are\n"
"\n"
"        curl dict://dict.org/show:db\n"
"        curl dict://dict.org/show:strat\n"
"\n"
);
 puts(
"  Authentication is still missing (but this is not required by the RFC)\n"
"\n"
"LDAP\n"
"\n"
"  If you have installed the OpenLDAP library, curl can take advantage of it\n"
"  and offer ldap:// support.\n"
"\n"
"  LDAP is a complex thing and writing an LDAP query is not an easy task. I do\n"
"  advice you to dig up the syntax description for that elsewhere. Two places\n"
"  that might suit you are:\n"
"\n"
"  Netscape's \"Netscape Directory SDK 3.0 for C Programmer's Guide Chapter 10:\n"
"  Working with LDAP URLs\":\n"
);
 puts(
"  http://developer.netscape.com/docs/manuals/dirsdk/csdk30/url.htm\n"
"\n"
"  RFC 2255, \"The LDAP URL Format\" http://www.rfc-editor.org/rfc/rfc2255.txt\n"
"\n"
"  To show you an example, this is now I can get all people from my local LDAP\n"
"  server that has a certain sub-domain in their email address:\n"
"\n"
"        curl -B \"ldap://ldap.frontec.se/o=frontec??sub?mail=*sth.frontec.se\"\n"
"\n"
"  If I want the same info in HTML format, I can get it by not using the -B\n"
"  (enforce ASCII) flag.\n"
"\n"
"ENVIRONMENT VARIABLES\n"
);
 puts(
"\n"
"  Curl reads and understands the following environment variables:\n"
"\n"
"        http_proxy, HTTPS_PROXY, FTP_PROXY, GOPHER_PROXY\n"
"\n"
"  They should be set for protocol-specific proxies. General proxy should be\n"
"  set with\n"
"        \n"
"        ALL_PROXY\n"
"\n"
"  A comma-separated list of host names that shouldn't go through any proxy is\n"
"  set in (only an asterisk, '*' matches all hosts)\n"
"\n"
"        NO_PROXY\n"
"\n"
"  If a tail substring of the domain-path for a host matches one of these\n"
);
 puts(
"  strings, transactions with that node will not be proxied.\n"
"\n"
"\n"
"  The usage of the -x/--proxy flag overrides the environment variables.\n"
"\n"
"NETRC\n"
"\n"
"  Unix introduced the .netrc concept a long time ago. It is a way for a user\n"
"  to specify name and password for commonly visited ftp sites in a file so\n"
"  that you don't have to type them in each time you visit those sites. You\n"
"  realize this is a big security risk if someone else gets hold of your\n"
);
 puts(
"  passwords, so therefor most unix programs won't read this file unless it is\n"
"  only readable by yourself (curl doesn't care though).\n"
"\n"
"  Curl supports .netrc files if told so (using the -n/--netrc and\n"
"  --netrc-optional options). This is not restricted to only ftp,\n"
"  but curl can use it for all protocols where authentication is used.\n"
"\n"
"  A very simple .netrc file could look something like:\n"
"\n"
"        machine curl.haxx.se login iamdaniel password mysecret\n"
"\n"
"CUSTOM OUTPUT\n"
"\n"
);
 puts(
"  To better allow script programmers to get to know about the progress of\n"
"  curl, the -w/--write-out option was introduced. Using this, you can specify\n"
"  what information from the previous transfer you want to extract.\n"
"\n"
"  To display the amount of bytes downloaded together with some text and an\n"
"  ending newline:\n"
"\n"
"        curl -w 'We downloaded %{size_download} bytes\\n' www.download.com\n"
"\n"
"KERBEROS4 FTP TRANSFER\n"
"\n"
"  Curl supports kerberos4 for FTP transfers. You need the kerberos package\n"
);
 puts(
"  installed and used at curl build time for it to be used.\n"
"\n"
"  First, get the krb-ticket the normal way, like with the kauth tool. Then use\n"
"  curl in way similar to:\n"
"\n"
"        curl --krb4 private ftp://krb4site.com -u username:fakepwd\n"
"\n"
"  There's no use for a password on the -u switch, but a blank one will make\n"
"  curl ask for one and you already entered the real password to kauth.\n"
"\n"
"TELNET\n"
"\n"
"  The curl telnet support is basic and very easy to use. Curl passes all data\n"
);
 puts(
"  passed to it on stdin to the remote server. Connect to a remote telnet\n"
"  server using a command line similar to:\n"
"\n"
"        curl telnet://remote.server.com\n"
"\n"
"  And enter the data to pass to the server on stdin. The result will be sent\n"
"  to stdout or to the file you specify with -o.\n"
"\n"
"  You might want the -N/--no-buffer option to switch off the buffered output\n"
"  for slow connections or similar.\n"
"\n"
"  Pass options to the telnet protocol negotiation, by using the -t option. To\n"
);
 puts(
"  tell the server we use a vt100 terminal, try something like:\n"
"\n"
"        curl -tTTYPE=vt100 telnet://remote.server.com\n"
"\n"
"  Other interesting options for it -t include:\n"
"\n"
"   - XDISPLOC=<X display> Sets the X display location.\n"
"\n"
"   - NEW_ENV=<var,val> Sets an environment variable.\n"
"\n"
"  NOTE: the telnet protocol does not specify any way to login with a specified\n"
"  user and password so curl can't do that automatically. To do that, you need\n"
);
 puts(
"  to track when the login prompt is received and send the username and\n"
"  password accordingly.\n"
"\n"
"PERSISTANT CONNECTIONS\n"
"\n"
"  Specifying multiple files on a single command line will make curl transfer\n"
"  all of them, one after the other in the specified order.\n"
"\n"
"  libcurl will attempt to use persistant connections for the transfers so that\n"
"  the second transfer to the same host can use the same connection that was\n"
"  already initiated and was left open in the previous transfer. This greatly\n"
);
 puts(
"  decreases connection time for all but the first transfer and it makes a far\n"
"  better use of the network.\n"
"\n"
"  Note that curl cannot use persistant connections for transfers that are used\n"
"  in subsequence curl invokes. Try to stuff as many URLs as possible on the\n"
"  same command line if they are using the same host, as that'll make the\n"
"  transfers faster. If you use a http proxy for file transfers, practicly\n"
"  all transfers will be persistant.\n"
"\n"
);
 puts(
"  Persistant connections were introduced in curl 7.7.\n"
"\n"
"MAILING LISTS\n"
"\n"
"  For your convenience, we have several open mailing lists to discuss curl,\n"
"  its development and things relevant to this. Get all info at\n"
"  http://curl.haxx.se/mail/. The lists available are:\n"
"\n"
"  curl-users\n"
"\n"
"    Users of the command line tool. How to use it, what doesn't work, new\n"
"    features, related tools, questions, news, installations, compilations,\n"
"    running, porting etc.\n"
"\n"
"  curl-library\n"
"\n"
);
 puts(
"    Developers using or developing libcurl. Bugs, extensions, improvements.\n"
"\n"
"  curl-announce\n"
"\n"
"    Low-traffic. Only announcements of new public versions.\n"
"\n"
"  curl-and-PHP\n"
"\n"
"    Using the curl functions in PHP. Everything curl with a PHP angle. Or PHP\n"
"    with a curl angle.\n"
"\n"
"  curl-commits\n"
"\n"
"    Receives notifications on all CVS commits done to the curl source module.\n"
"    This can become quite a large amount of mails during intense development,\n"
);
 puts(
"    be aware. This is for us who like email...\n"
"\n"
"  curl-www-commits\n"
"\n"
"    Receives notifications on all CVS commits done to the curl www module\n"
"    (basicly the web site).  This can become quite a large amount of mails\n"
"    during intense changing, be aware. This is for us who like email...\n"
"\n"
"  Please direct curl questions, feature requests and trouble reports to one of\n"
"  these mailing lists instead of mailing any individual.\n"
 ) ;
}
