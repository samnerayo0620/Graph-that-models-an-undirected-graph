Last login: Mon Mar  4 20:08:26 on ttys022
samnerayo@Samuels-Air-3 ~ % ssh snerayo@cs1.seattleu.edu
snerayo@cs1.seattleu.edu's password: 
--------------------------------
If you type wrong password 5 times, your account on this system will be locked for 20 minutes.
If you try to login as root, your account on this system will be locked for 60 minutes.
--------------------------------------------------------------------------------------
Student File quota is 5GB.
Faculty File quota is 50GB.
---------------------------
CPSC 1420,CPSC 1430,CPSC 2430 and CPSC 1230 Students
echo "alias g++='g++ -Wall -Werror -pedantic'" >>~/.bashrc
or emacs ~/.bashrc   
add     alias g++='g++ -Wall -Werror -pedantic'          to  ~/.bashrc
--------------------------------------------------------------------
Programs:
java-17 gcc(version-12.1.1) gnuplot scala cmake epstopdf go dotnet git2 python3 openmpi tbb ns-allinone-3 tmux(screen) tensor-flow emacs vimdiff pinky(finger) telnet(client) dos2unix texlive gtest(/usr/local/include/gtest/) gcc9(scl enable gcc-toolset-9 bash) gcc10(scl enable gcc-toolset-10 bash)  gcc11(scl enable gcc-toolset-11 bash) whois valgrind  
-----------------------------------------------------------------------------------------------------
4 ways to connect from home to cs1.seattleu.edu.
1st: ssh cs1.seattleu.edu 
2nd: https://seattleu.apporto.com -> putty cs1.seattleu.edu
3rd: SU VPN -> ssh cs1.seattleu.edu
4th: winscp cs1.seattleu.edu (https://winscp.net/download/WinSCP-5.17.10-Portable.zip)

To Download putty.exe    https://the.earth.li/~sgtatham/putty/latest/w64/putty.exe)
-----------------------------------
When you are on a wired network connection in your dorm room, you will need to visit http://wiredlogin.seattleu.edu and log in using your seattleu credentials before you are able to access cs1.seattleu.edu.
Your authentication will last for 12 hours.
---------------------------------------------
To convert plain text files in DOS/MAC format to LINUX format or
To remove CTRL-M(^M) characters from a text file, run command below
dos2unix filename
---------------------------------------------
Connect using Visual Studio 2017
https://docs.microsoft.com/en-us/cpp/linux/connect-to-your-remote-linux-computer

Connect using Visual Studio Code
/home/vscode-howto.txt

Connect using CLion
https://www.jetbrains.com/help/clion/remote-development.html#workflow
------------------------------------------------
To change color of putty terminal
putty->window->colors->Default-Forground  0 0 0
putty->window->colors->Default-Background 255 255 255
-----------------------------------------------
Emacs Reference Card /home/emacs-ref-card.txt
-----------------------------------------------
please contact philipr@seattleu.edu for technical support.
---------------------------------------------------------
To fix error message “Disk Quota Exceeded”
du -sh .cache
remove files from .cache or remove .cache folder to recover space
-----------------------------------------------------------------
SU-Visitor WiFi does not allow connecting to cs1.
Tutoring SINE-220-08
++++++++++++++++++++
Last login: Mon Mar  4 20:45:28 2024 from 10.124.72.20
Process-num: Username:
     10 snerayo
[snerayo@cs1 ~]$ cd c3500/p3
[snerayo@cs1 p3]$ ls
p3.cpp  README.md
[snerayo@cs1 p3]$ echo "# cpp-Fib-seq" >> README.md
[snerayo@cs1 p3]$ git init
Reinitialized existing Git repository in /home/st/snerayo/c3500/p3/.git/
[snerayo@cs1 p3]$ git add .
[snerayo@cs1 p3]$ git commit -m "first commit"
[main 95f90e0] first commit
 1 file changed, 1 insertion(+)
[snerayo@cs1 p3]$ git branch -M main
[snerayo@cs1 p3]$ git remote add origin git@github.com:samnerayo0620/cpp-Fib-seq.git
error: remote origin already exists.
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ ssh-keygen -t ed25519 -C samuelnerayo@gmail.com
Generating public/private ed25519 key pair.
Enter file in which to save the key (/home/st/snerayo/.ssh/id_ed25519):  Ed25519
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in  Ed25519.
Your public key has been saved in  Ed25519.pub.
The key fingerprint is:
SHA256:EX7vCNQWpV9buTnHD3hjVZ8KrD5FbCpl7axUsYmZ5Eo samuelnerayo@gmail.com
The key's randomart image is:
+--[ED25519 256]--+
|        ...o.   .|
|       .ooBo+   =|
|       E+B=@  .o+|
|      ..++Oo.o.=o|
|       oS+ ++.*+o|
|        +.oo o o+|
|         +. .   .|
|          .      |
|                 |
+----[SHA256]-----+
[snerayo@cs1 p3]$ ls
' Ed25519'  ' Ed25519.pub'   p3.cpp   README.md
[snerayo@cs1 p3]$ echo "# cpp-Fib-seq" >> README.md
[snerayo@cs1 p3]$ git init
Reinitialized existing Git repository in /home/st/snerayo/c3500/p3/.git/
[snerayo@cs1 p3]$ git add .
[snerayo@cs1 p3]$ git commit -m "first commit"
[main e0ce9ba] first commit
 3 files changed, 9 insertions(+)
 create mode 100644  Ed25519
 create mode 100644  Ed25519.pub
[snerayo@cs1 p3]$ git branch -M main
[snerayo@cs1 p3]$ git remote add origin git@github.com:samnerayo0620/cpp-Fib-seq.git
error: remote origin already exists.
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Could not open a connection to your authentication agent.
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ ls
' Ed25519'  ' Ed25519.pub'   p3.cpp   README.md
[snerayo@cs1 p3]$ rm -r ' Ed25519'
rm: remove regular file ' Ed25519'? y
[snerayo@cs1 p3]$ rm -r ' Ed25519.pub'
rm: remove regular file ' Ed25519.pub'? y
[snerayo@cs1 p3]$ ls
p3.cpp  README.md
[snerayo@cs1 p3]$ echo "# cpp-Fib-seq" >> README.md
[snerayo@cs1 p3]$ git init
Reinitialized existing Git repository in /home/st/snerayo/c3500/p3/.git/
[snerayo@cs1 p3]$ git add README.md
[snerayo@cs1 p3]$ git add .
[snerayo@cs1 p3]$ git commit -m "first commit"
[main 235dcc4] first commit
 3 files changed, 1 insertion(+), 8 deletions(-)
 delete mode 100644  Ed25519
 delete mode 100644  Ed25519.pub
[snerayo@cs1 p3]$ git branch -M main
[snerayo@cs1 p3]$ git remote add origin git@github.com:samnerayo0620/cpp-Fib-seq.git
error: remote origin already exists.
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ eval "$(ssh-agent -s)"
Agent pid 1322162
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
/home/st/snerayo/.ssh/id_ed25519: No such file or directory
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ ssh-add -l
The agent has no identities.
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
/home/st/snerayo/.ssh/id_ed25519: No such file or directory
[snerayo@cs1 p3]$ ls /home/st/snerayo/.ssh/id_ed25519
ls: cannot access '/home/st/snerayo/.ssh/id_ed25519': No such file or directory
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ ssh-keygen -t ed25519 -C "your_email@example.com"
Generating public/private ed25519 key pair.
Enter file in which to save the key (/home/st/snerayo/.ssh/id_ed25519): 
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/st/snerayo/.ssh/id_ed25519.
Your public key has been saved in /home/st/snerayo/.ssh/id_ed25519.pub.
The key fingerprint is:
SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 your_email@example.com
The key's randomart image is:
+--[ED25519 256]--+
|        o        |
|    .  . +       |
|     o  + . .    |
|  . o +o o o.    |
| . . *  S O..o   |
|  o + . .+.*o..  |
|   + =.=..oo..   |
|  + . Eooo..o    |
|.+ ....++..ooo   |
+----[SHA256]-----+
[snerayo@cs1 p3]$ ls
p3.cpp  README.md
[snerayo@cs1 p3]$ git push -u origin main

git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ ssh-add -l
The agent has no identities.
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ ssh -T git@github.com
git@github.com: Permission denied (publickey).
[snerayo@cs1 p3]$ eval "$(ssh-agent -s)"
Agent pid 1327628
[snerayo@cs1 p3]$ # Add the SSH key to the agent
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ # List the SSH keys added to the agent
[snerayo@cs1 p3]$ ssh-add -l
256 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 your_email@example.com (ED25519)
[snerayo@cs1 p3]$ # Test SSH authentication with GitHub
[snerayo@cs1 p3]$ ssh -T git@github.com
git@github.com: Permission denied (publickey).
[snerayo@cs1 p3]$ git remote -v
origin	git@github.com:samnerayo0620/cpp-Fib-seq.git (fetch)
origin	git@github.com:samnerayo0620/cpp-Fib-seq.git (push)
[snerayo@cs1 p3]$ git config --get user.email
samuelnerayo@gmail.com
[snerayo@cs1 p3]$ git config --get user.name
samnerayo0620
[snerayo@cs1 p3]$ ssh -vT git@github.com
OpenSSH_8.0p1, OpenSSL 1.1.1k  FIPS 25 Mar 2021
debug1: Reading configuration data /etc/ssh/ssh_config
debug1: Reading configuration data /etc/ssh/ssh_config.d/05-redhat.conf
debug1: Reading configuration data /etc/crypto-policies/back-ends/openssh.config
debug1: configuration requests final Match pass
debug1: re-parsing configuration
debug1: Reading configuration data /etc/ssh/ssh_config
debug1: Reading configuration data /etc/ssh/ssh_config.d/05-redhat.conf
debug1: Reading configuration data /etc/crypto-policies/back-ends/openssh.config
debug1: Connecting to github.com [20.29.134.23] port 22.
debug1: Connection established.
debug1: identity file /home/st/snerayo/.ssh/id_rsa type 0
debug1: identity file /home/st/snerayo/.ssh/id_rsa-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_dsa type -1
debug1: identity file /home/st/snerayo/.ssh/id_dsa-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_ecdsa type -1
debug1: identity file /home/st/snerayo/.ssh/id_ecdsa-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_ed25519 type 3
debug1: identity file /home/st/snerayo/.ssh/id_ed25519-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_xmss type -1
debug1: identity file /home/st/snerayo/.ssh/id_xmss-cert type -1
debug1: Local version string SSH-2.0-OpenSSH_8.0
debug1: Remote protocol version 2.0, remote software version babeld-8405f9f3
debug1: no match: babeld-8405f9f3
debug1: Authenticating to github.com:22 as 'git'
debug1: SSH2_MSG_KEXINIT sent
debug1: SSH2_MSG_KEXINIT received
debug1: kex: algorithm: curve25519-sha256
debug1: kex: host key algorithm: ecdsa-sha2-nistp256
debug1: kex: server->client cipher: aes256-gcm@openssh.com MAC: <implicit> compression: none
debug1: kex: client->server cipher: aes256-gcm@openssh.com MAC: <implicit> compression: none
debug1: kex: curve25519-sha256 need=32 dh_need=32
debug1: kex: curve25519-sha256 need=32 dh_need=32
debug1: expecting SSH2_MSG_KEX_ECDH_REPLY
debug1: Server host key: ecdsa-sha2-nistp256 SHA256:p2QAMXNIC1TJYWeIOttrVc98/R1BUFWu3/LiyKgUfQM
debug1: Host 'github.com' is known and matches the ECDSA host key.
debug1: Found key in /home/st/snerayo/.ssh/known_hosts:2
debug1: rekey out after 4294967296 blocks
debug1: SSH2_MSG_NEWKEYS sent
debug1: expecting SSH2_MSG_NEWKEYS
debug1: SSH2_MSG_NEWKEYS received
debug1: rekey in after 4294967296 blocks
debug1: Will attempt key: /home/st/snerayo/.ssh/id_ed25519 ED25519 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 agent
debug1: Will attempt key: /home/st/snerayo/.ssh/id_rsa RSA SHA256:1TPfIhOd+gc9Q1YcXzskvU1rJT+LR0h9ZA8JkvLkWZQ
debug1: Will attempt key: /home/st/snerayo/.ssh/id_dsa 
debug1: Will attempt key: /home/st/snerayo/.ssh/id_ecdsa 
debug1: Will attempt key: /home/st/snerayo/.ssh/id_xmss 
debug1: SSH2_MSG_EXT_INFO received
debug1: kex_input_ext_info: server-sig-algs=<ssh-ed25519-cert-v01@openssh.com,ecdsa-sha2-nistp521-cert-v01@openssh.com,ecdsa-sha2-nistp384-cert-v01@openssh.com,ecdsa-sha2-nistp256-cert-v01@openssh.com,sk-ssh-ed25519-cert-v01@openssh.com,sk-ecdsa-sha2-nistp256-cert-v01@openssh.com,rsa-sha2-512-cert-v01@openssh.com,rsa-sha2-256-cert-v01@openssh.com,ssh-rsa-cert-v01@openssh.com,sk-ssh-ed25519@openssh.com,sk-ecdsa-sha2-nistp256@openssh.com,ssh-ed25519,ecdsa-sha2-nistp521,ecdsa-sha2-nistp384,ecdsa-sha2-nistp256,rsa-sha2-512,rsa-sha2-256,ssh-rsa>
debug1: SSH2_MSG_SERVICE_ACCEPT received
debug1: Authentications that can continue: publickey
debug1: Next authentication method: publickey
debug1: Offering public key: /home/st/snerayo/.ssh/id_ed25519 ED25519 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 agent
debug1: Authentications that can continue: publickey
debug1: Offering public key: /home/st/snerayo/.ssh/id_rsa RSA SHA256:1TPfIhOd+gc9Q1YcXzskvU1rJT+LR0h9ZA8JkvLkWZQ
debug1: Authentications that can continue: publickey
debug1: Trying private key: /home/st/snerayo/.ssh/id_dsa
debug1: Trying private key: /home/st/snerayo/.ssh/id_ecdsa
debug1: Trying private key: /home/st/snerayo/.ssh/id_xmss
debug1: No more authentication methods to try.
git@github.com: Permission denied (publickey).
[snerayo@cs1 p3]$ eval "$(ssh-agent -s)"
Agent pid 1331240
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ ssh -vT git@github.com
OpenSSH_8.0p1, OpenSSL 1.1.1k  FIPS 25 Mar 2021
debug1: Reading configuration data /etc/ssh/ssh_config
debug1: Reading configuration data /etc/ssh/ssh_config.d/05-redhat.conf
debug1: Reading configuration data /etc/crypto-policies/back-ends/openssh.config
debug1: configuration requests final Match pass
debug1: re-parsing configuration
debug1: Reading configuration data /etc/ssh/ssh_config
debug1: Reading configuration data /etc/ssh/ssh_config.d/05-redhat.conf
debug1: Reading configuration data /etc/crypto-policies/back-ends/openssh.config
debug1: Connecting to github.com [20.29.134.23] port 22.
debug1: Connection established.
debug1: identity file /home/st/snerayo/.ssh/id_rsa type 0
debug1: identity file /home/st/snerayo/.ssh/id_rsa-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_dsa type -1
debug1: identity file /home/st/snerayo/.ssh/id_dsa-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_ecdsa type -1
debug1: identity file /home/st/snerayo/.ssh/id_ecdsa-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_ed25519 type 3
debug1: identity file /home/st/snerayo/.ssh/id_ed25519-cert type -1
debug1: identity file /home/st/snerayo/.ssh/id_xmss type -1
debug1: identity file /home/st/snerayo/.ssh/id_xmss-cert type -1
debug1: Local version string SSH-2.0-OpenSSH_8.0
debug1: Remote protocol version 2.0, remote software version babeld-8405f9f3
debug1: no match: babeld-8405f9f3
debug1: Authenticating to github.com:22 as 'git'
debug1: SSH2_MSG_KEXINIT sent
debug1: SSH2_MSG_KEXINIT received
debug1: kex: algorithm: curve25519-sha256
debug1: kex: host key algorithm: ecdsa-sha2-nistp256
debug1: kex: server->client cipher: aes256-gcm@openssh.com MAC: <implicit> compression: none
debug1: kex: client->server cipher: aes256-gcm@openssh.com MAC: <implicit> compression: none
debug1: kex: curve25519-sha256 need=32 dh_need=32
debug1: kex: curve25519-sha256 need=32 dh_need=32
debug1: expecting SSH2_MSG_KEX_ECDH_REPLY
debug1: Server host key: ecdsa-sha2-nistp256 SHA256:p2QAMXNIC1TJYWeIOttrVc98/R1BUFWu3/LiyKgUfQM
debug1: Host 'github.com' is known and matches the ECDSA host key.
debug1: Found key in /home/st/snerayo/.ssh/known_hosts:2
debug1: rekey out after 4294967296 blocks
debug1: SSH2_MSG_NEWKEYS sent
debug1: expecting SSH2_MSG_NEWKEYS
debug1: SSH2_MSG_NEWKEYS received
debug1: rekey in after 4294967296 blocks
debug1: Will attempt key: /home/st/snerayo/.ssh/id_ed25519 ED25519 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 agent
debug1: Will attempt key: /home/st/snerayo/.ssh/id_rsa RSA SHA256:1TPfIhOd+gc9Q1YcXzskvU1rJT+LR0h9ZA8JkvLkWZQ
debug1: Will attempt key: /home/st/snerayo/.ssh/id_dsa 
debug1: Will attempt key: /home/st/snerayo/.ssh/id_ecdsa 
debug1: Will attempt key: /home/st/snerayo/.ssh/id_xmss 
debug1: SSH2_MSG_EXT_INFO received
debug1: kex_input_ext_info: server-sig-algs=<ssh-ed25519-cert-v01@openssh.com,ecdsa-sha2-nistp521-cert-v01@openssh.com,ecdsa-sha2-nistp384-cert-v01@openssh.com,ecdsa-sha2-nistp256-cert-v01@openssh.com,sk-ssh-ed25519-cert-v01@openssh.com,sk-ecdsa-sha2-nistp256-cert-v01@openssh.com,rsa-sha2-512-cert-v01@openssh.com,rsa-sha2-256-cert-v01@openssh.com,ssh-rsa-cert-v01@openssh.com,sk-ssh-ed25519@openssh.com,sk-ecdsa-sha2-nistp256@openssh.com,ssh-ed25519,ecdsa-sha2-nistp521,ecdsa-sha2-nistp384,ecdsa-sha2-nistp256,rsa-sha2-512,rsa-sha2-256,ssh-rsa>
debug1: SSH2_MSG_SERVICE_ACCEPT received
debug1: Authentications that can continue: publickey
debug1: Next authentication method: publickey
debug1: Offering public key: /home/st/snerayo/.ssh/id_ed25519 ED25519 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 agent
debug1: Authentications that can continue: publickey
debug1: Offering public key: /home/st/snerayo/.ssh/id_rsa RSA SHA256:1TPfIhOd+gc9Q1YcXzskvU1rJT+LR0h9ZA8JkvLkWZQ
debug1: Authentications that can continue: publickey
debug1: Trying private key: /home/st/snerayo/.ssh/id_dsa
debug1: Trying private key: /home/st/snerayo/.ssh/id_ecdsa
debug1: Trying private key: /home/st/snerayo/.ssh/id_xmss
debug1: No more authentication methods to try.
git@github.com: Permission denied (publickey).
[snerayo@cs1 p3]$ ssh-add -D
All identities removed.
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ ssh-add -l
256 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 your_email@example.com (ED25519)
[snerayo@cs1 p3]$ ssh -T git@github.com
git@github.com: Permission denied (publickey).
[snerayo@cs1 p3]$ git remote set-url origin git@github.com:samnerayo0620/cpp-Fib-seq.git
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ git remote set-url origin git@github.com:samnerayo0620/cpp-Fib-seq.git
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ # Create a new README.md file
[snerayo@cs1 p3]$ echo "# cpp-Fib-seq" >> README.md
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ # Initialize a new Git repository
[snerayo@cs1 p3]$ git init
Reinitialized existing Git repository in /home/st/snerayo/c3500/p3/.git/
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ # Add README.md to the staging area
[snerayo@cs1 p3]$ git add README.md
[snerayo@cs1 p3]$ git add .
[snerayo@cs1 p3]$ git commit -m "first commit"
[main 024cf99] first commit
 1 file changed, 1 insertion(+)
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ # Rename the branch to main
[snerayo@cs1 p3]$ git branch -M main
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ # Add a remote named "origin" with the SSH URL
[snerayo@cs1 p3]$ git remote add origin git@github.com:samnerayo0620/cpp-Fib-seq.git
error: remote origin already exists.
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ # Push the changes to the main branch on GitHub
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ eval "$(ssh-agent -s)"
Agent pid 1336108
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ ssh-add -l
256 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 your_email@example.com (ED25519)
[snerayo@cs1 p3]$ git remote set-url origin git@github.com:samnerayo0620/cpp-Fib-seq.git
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ git push -u origin main -o IdentitiesOnly=yes -o IdentityFile=/home/st/snerayo/.ssh/id_ed25519
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ 
[snerayo@cs1 p3]$ eval "$(ssh-agent -s)"
Agent pid 1337716
[snerayo@cs1 p3]$ ssh-add -l
The agent has no identities.
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ git remote set-url origin https://github.com/username/repository.git
[snerayo@cs1 p3]$ it remote set-url origin git@github.com:samnerayo/repository.git
-bash: it: command not found
[snerayo@cs1 p3]$ git remote set-url origin git@github.com:samnerayo/repository.git
[snerayo@cs1 p3]$ git remote -v
origin	git@github.com:samnerayo/repository.git (fetch)
origin	git@github.com:samnerayo/repository.git (push)
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ eval "$(ssh-agent -s)"
Agent pid 1344065
[snerayo@cs1 p3]$ ssh-add /home/st/snerayo/.ssh/id_ed25519
Identity added: /home/st/snerayo/.ssh/id_ed25519 (your_email@example.com)
[snerayo@cs1 p3]$ ssh-add -l
256 SHA256:FA9uv1IjdwulvPuzVrDSqrDzKVDwJrO3HY4M4PNoen8 your_email@example.com (ED25519)
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ ssh-keygen -t rsa
Generating public/private rsa key pair.
Enter file in which to save the key (/home/st/snerayo/.ssh/id_rsa): 
/home/st/snerayo/.ssh/id_rsa already exists.
Overwrite (y/n)? n
[snerayo@cs1 p3]$ pbcopy  ~/.ssh/id_rsa.pub
-bash: pbcopy: command not found
[snerayo@cs1 p3]$ pbcopy  ~/.ssh/id_rsa.pub
-bash: pbcopy: command not found
[snerayo@cs1 p3]$ xclip -sel clip < ~/.ssh/id_rsa.pub
-bash: xclip: command not found
[snerayo@cs1 p3]$ brew install pbcopy
-bash: brew: command not found
[snerayo@cs1 p3]$ pbcopy < ~/.ssh/id_rsa.pub
-bash: pbcopy: command not found
[snerayo@cs1 p3]$ brew install pbcopy
-bash: brew: command not found
[snerayo@cs1 p3]$ cat ~/.ssh/id_rsa.pub
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAACAQCqi0oPjJjNcpnCq3nwGhfMlF0O5DirUCDbFIF/uGSenlT6sD3H6WICG8J45OJpZaJ31vBhgiZv+rQ9yqxflIq3FwCrCEGs4U18DquarZ8kja3X899hBo49pT0/CA6aN0vp9IGUxGpPoYKdz2y6uSuT3DujqPkFTtVcU4+kmWp5Os8abwqrOjr7/VdGh14L+BPT0VMlZY7XqeGW7LsXQ43DkrYBMtkg7Hwp4FCMniO6hg5IdSXz/6uVqGACdyq/Qu+uBaH6RT+Ibyh3j4yj0EHTqeclagZtkPh2bM9B6oeCyN2DGjOz+zklq7eOAagl0gk4ZopIcp7oaWxM2g85achFstFsYpj0cbcV4fcf6TAg5vSzxsOzj1FdfH9rCWwpGE/qNXG+VD2OJseMcpvEFaFLEjWHlXcV5buWHrBETOXgMHiR88vTrjaf9iK3OAH248ACAvH3i5eygzLS5BcswVRshsXj94p2EGOq9AH7Ceke4yaNqSwq1ISRB8iWKQp9QcxbkivAWkCsmIPt7a+Gc2JCjmfO176VFf4zavtzNAsHcF/Cg8AEDLSJIKhNr4Xcd1279QUMg9mDNLu1JogwSDLOBzMiQGGxlfv3Sl0MN5SAeCPBEzIxYXzpkGmd/xuVNIo0DbuO7yESBPvSMYKQZhAr1Z3WsSwmm7bvf/7or6qoqQ== snerayo@seattleu.edu
[snerayo@cs1 p3]$ git push -u origin main
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ cat ~/.ssh/id_rsa.pub
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAACAQCqi0oPjJjNcpnCq3nwGhfMlF0O5DirUCDbFIF/uGSenlT6sD3H6WICG8J45OJpZaJ31vBhgiZv+rQ9yqxflIq3FwCrCEGs4U18DquarZ8kja3X899hBo49pT0/CA6aN0vp9IGUxGpPoYKdz2y6uSuT3DujqPkFTtVcU4+kmWp5Os8abwqrOjr7/VdGh14L+BPT0VMlZY7XqeGW7LsXQ43DkrYBMtkg7Hwp4FCMniO6hg5IdSXz/6uVqGACdyq/Qu+uBaH6RT+Ibyh3j4yj0EHTqeclagZtkPh2bM9B6oeCyN2DGjOz+zklq7eOAagl0gk4ZopIcp7oaWxM2g85achFstFsYpj0cbcV4fcf6TAg5vSzxsOzj1FdfH9rCWwpGE/qNXG+VD2OJseMcpvEFaFLEjWHlXcV5buWHrBETOXgMHiR88vTrjaf9iK3OAH248ACAvH3i5eygzLS5BcswVRshsXj94p2EGOq9AH7Ceke4yaNqSwq1ISRB8iWKQp9QcxbkivAWkCsmIPt7a+Gc2JCjmfO176VFf4zavtzNAsHcF/Cg8AEDLSJIKhNr4Xcd1279QUMg9mDNLu1JogwSDLOBzMiQGGxlfv3Sl0MN5SAeCPBEzIxYXzpkGmd/xuVNIo0DbuO7yESBPvSMYKQZhAr1Z3WsSwmm7bvf/7or6qoqQ== snerayo@seattleu.edu
[snerayo@cs1 p3]$ git push -u origin main
ERROR: Repository not found.
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ echo "# cpp-Fib-seq" >> README.md
[snerayo@cs1 p3]$ git init
Reinitialized existing Git repository in /home/st/snerayo/c3500/p3/.git/
[snerayo@cs1 p3]$ git add README.md
[snerayo@cs1 p3]$ git add .
[snerayo@cs1 p3]$ git commit -m "first commit"
[main 4a16451] first commit
 1 file changed, 1 insertion(+)
[snerayo@cs1 p3]$ git branch -M main
[snerayo@cs1 p3]$ git remote add origin git@github.com:samnerayo0620/cpp-Fib-seq.git
error: remote origin already exists.
[snerayo@cs1 p3]$ git push -u origin main
ERROR: Repository not found.
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[snerayo@cs1 p3]$ git remote -v
origin	git@github.com:samnerayo/repository.git (fetch)
origin	git@github.com:samnerayo/repository.git (push)
[snerayo@cs1 p3]$ git remote set-url origin git@github.com:samnerayo0620/cpp-Fib-seq.git
[snerayo@cs1 p3]$ git push -u origin main
Enumerating objects: 28, done.
Counting objects: 100% (28/28), done.
Delta compression using up to 64 threads
Compressing objects: 100% (26/26), done.
Writing objects: 100% (28/28), 7.77 KiB | 3.88 MiB/s, done.
Total 28 (delta 5), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (5/5), done.
To github.com:samnerayo0620/cpp-Fib-seq.git
 * [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
[snerayo@cs1 p3]$ cd
[snerayo@cs1 ~]$ cd c3500/
[snerayo@cs1 c3500]$ ls
 activity      'Assignment 10-1'   assignment2-2   Assignment3-1       hw1     lab0   p3
 activity.log   Assignment2-1      Assignment2-3   cmake-build-debug   hw1-1   p1     TCP
[snerayo@cs1 c3500]$ cd assignment2-2/
[snerayo@cs1 assignment2-2]$ ls
pthread-data-sharing-mutex-strict-alternation      pthread_join
pthread-data-sharing-mutex-strict-alternation.cpp  pthread_join.cpp
[snerayo@cs1 assignment2-2]$ emacs pthread_join.cpp
[snerayo@cs1 assignment2-2]$ emacs pthread_join.cpp
[snerayo@cs1 assignment2-2]$ echo "# Pthreads--Strict-Alternation-" >> README.md
[snerayo@cs1 assignment2-2]$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/st/snerayo/c3500/assignment2-2/.git/
[snerayo@cs1 assignment2-2]$ git add README.md
[snerayo@cs1 assignment2-2]$ git add .
[snerayo@cs1 assignment2-2]$ git commit -m "first commit"
[master (root-commit) c51f8f7] first commit
 5 files changed, 137 insertions(+)
 create mode 100644 README.md
 create mode 100755 pthread-data-sharing-mutex-strict-alternation
 create mode 100644 pthread-data-sharing-mutex-strict-alternation.cpp
 create mode 100755 pthread_join
 create mode 100644 pthread_join.cpp
[snerayo@cs1 assignment2-2]$ git branch -M main
[snerayo@cs1 assignment2-2]$ git remote add origin git@github.com:samnerayo0620/Pthreads--Strict-Alternation-.git
[snerayo@cs1 assignment2-2]$ git push -u origin main
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 64 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (7/7), 7.70 KiB | 3.85 MiB/s, done.
Total 7 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
To github.com:samnerayo0620/Pthreads--Strict-Alternation-.git
 * [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
[snerayo@cs1 assignment2-2]$ cd 
[snerayo@cs1 ~]$ cd c3500/
[snerayo@cs1 c3500]$ ls
 activity      'Assignment 10-1'   assignment2-2   Assignment3-1       hw1     lab0   p3
 activity.log   Assignment2-1      Assignment2-3   cmake-build-debug   hw1-1   p1     TCP
[snerayo@cs1 c3500]$ cd Assignment 10-1
-bash: cd: too many arguments
[snerayo@cs1 c3500]$ cd Assignment2-1
[snerayo@cs1 Assignment2-1]$ ls
pthreads_p2.cpp
[snerayo@cs1 Assignment2-1]$ emacs pthreads_p2.cpp 
[snerayo@cs1 Assignment2-1]$ echo "# multiple-threads-to-perform-a-series-of-calculations-" >> README.md
[snerayo@cs1 Assignment2-1]$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/st/snerayo/c3500/Assignment2-1/.git/
[snerayo@cs1 Assignment2-1]$ git add README.md
[snerayo@cs1 Assignment2-1]$ git add .
[snerayo@cs1 Assignment2-1]$ git commit -m "first commit"
[master (root-commit) f52e858] first commit
 3 files changed, 200 insertions(+)
 create mode 100644 README.md
 create mode 100644 pthreads_p2.cpp
 create mode 100644 pthreads_p2.cpp~
[snerayo@cs1 Assignment2-1]$ git branch -M main
[snerayo@cs1 Assignment2-1]$ git remote add origin git@github.com:samnerayo0620/multiple-threads-to-perform-a-series-of-calculations-.git
[snerayo@cs1 Assignment2-1]$ git push -u origin main
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 64 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 1.38 KiB | 1.38 MiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
To github.com:samnerayo0620/multiple-threads-to-perform-a-series-of-calculations-.git
 * [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
[snerayo@cs1 Assignment2-1]$ cd
[snerayo@cs1 ~]$ cd c3500/
[snerayo@cs1 c3500]$ ls
 activity      'Assignment 10-1'   assignment2-2   Assignment3-1       hw1     lab0   p3
 activity.log   Assignment2-1      Assignment2-3   cmake-build-debug   hw1-1   p1     TCP
[snerayo@cs1 c3500]$ cd Assignment2-3
[snerayo@cs1 Assignment2-3]$ ls
pthread-data-sharing-mutex-os-call.cpp  pthread-data-sharing-mutex-peterson.cpp
[snerayo@cs1 Assignment2-3]$ echo "# Pthreads---Peterson-s-Solution-Mutex" >> README.md
[snerayo@cs1 Assignment2-3]$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/st/snerayo/c3500/Assignment2-3/.git/
[snerayo@cs1 Assignment2-3]$ git add README.md
[snerayo@cs1 Assignment2-3]$ git add .
[snerayo@cs1 Assignment2-3]$ git commit -m "first commit"
[master (root-commit) df36b01] first commit
 3 files changed, 193 insertions(+)
 create mode 100644 README.md
 create mode 100644 pthread-data-sharing-mutex-os-call.cpp
 create mode 100644 pthread-data-sharing-mutex-peterson.cpp
[snerayo@cs1 Assignment2-3]$ git branch -M main
[snerayo@cs1 Assignment2-3]$ git remote add origin git@github.com:samnerayo0620/Pthreads---Peterson-s-Solution-Mutex.git
[snerayo@cs1 Assignment2-3]$ git push -u origin main
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 64 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 1.77 KiB | 1.77 MiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
To github.com:samnerayo0620/Pthreads---Peterson-s-Solution-Mutex.git
 * [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
[snerayo@cs1 Assignment2-3]$ cd
[snerayo@cs1 ~]$ cd c3500/
[snerayo@cs1 c3500]$ ls
 activity      'Assignment 10-1'   assignment2-2   Assignment3-1       hw1     lab0   p3
 activity.log   Assignment2-1      Assignment2-3   cmake-build-debug   hw1-1   p1     TCP
[snerayo@cs1 c3500]$ cd cmake-build-debug/
[snerayo@cs1 cmake-build-debug]$ ls
3500_E_3_2.cbp  CMakeCache.txt  CMakeFiles  cmake_install.cmake  Makefile  Testing
[snerayo@cs1 cmake-build-debug]$ cd
[snerayo@cs1 ~]$ cd c3500/lab0/
[snerayo@cs1 lab0]$ ls
lab0.cpp
[snerayo@cs1 lab0]$ cd 
[snerayo@cs1 ~]$ ls
 2600    Assignment   CPSC          cpsc2600   dfa2.txt   hw6.py        peas.cpp~
 3500    c3500        cpsc2430      CPSC3400   dfa3.txt  '#peas.cpp#'   sample-dfa.txt
 a.out   clh         '#cpsc2600#'   dfa1.txt   dfa.py     peas.cpp      sample-tests.txt
[snerayo@cs1 ~]$ cd cpsc2600
[snerayo@cs1 cpsc2600]$ ls
a.out  hw5  IntSet.cpp  IntSet.cpp~  IntSet.h  main.cpp  main.cpp~
[snerayo@cs1 cpsc2600]$ ls
a.out  hw5  IntSet.cpp  IntSet.cpp~  IntSet.h  main.cpp  main.cpp~
[snerayo@cs1 cpsc2600]$ cd hw5
[snerayo@cs1 hw5]$ ls
graph0.txt  graph2.txt  Graph.cpp  Graph.h~  main.cpp  QueueInt.cpp  StackInt.cpp  StackInt.h~
graph1.txt  graph3.txt  Graph.h    hw5       Makefile  QueueInt.h    StackInt.h
[snerayo@cs1 hw5]$ emacs main.cpp
[snerayo@cs1 hw5]$ cd StackInt.cpp
-bash: cd: StackInt.cpp: Not a directory
[snerayo@cs1 hw5]$ emacs StackInt.pp
[snerayo@cs1 hw5]$ emacs QueueInt.cpp
[snerayo@cs1 hw5]$ emacs QueueInt.cpp

File Edit Options Buffers Tools C++ Help                                                            
// FILE: QueueInt.cpp                                                                               
// DESCRIPTION: Class implementation for a queue of integers                                        

// NOTE: You are not allowed to modify this file.                                                   

#include <iostream>
#include <cstdlib>
using namespace std;

#include "QueueInt.h"

// Add an integer to the back of the queue.                                                         
void QueueInt::enqueue(int val)
{
  queueObj.push(val);
}

// Removes and returns an integer from the front of the queue. Aborts the                           
// program is the queue is empty.                                                                   
int QueueInt::dequeue()
{
  int val = front();
  queueObj.pop();
  return val;
}

// Returns but does not remove the integer at the front of the queue. Aborts the                    
// program is the queue is empty.                                                                   
int QueueInt::front() const
{
  if (isEmpty()) {
    cerr << "Tried to access empty queue --> aborting program" << endl;
    exit(-1);
  }

  return queueObj.front();
}

// Returns true if the queue is empty.                                                              
bool QueueInt::isEmpty() const
{
  return queueObj.empty();
}





-UU-:----F1  QueueInt.cpp   All (1,0)      (C++//l Abbrev) -----------------------------------------
For information about GNU Emacs and the GNU system, type <f1> C-a.
// FILE: QueueInt.cpp
// DESCRIPTION: Class implementation for a queue of integers

// NOTE: You are not allowed to modify this file.

#include <iostream>
#include <cstdlib>
using namespace std;

#include "QueueInt.h"

// Add an integer to the back of the queue.
void QueueInt::enqueue(int val)
{
  queueObj.push(val);
}

// Removes and returns an integer from the front of the queue. Aborts the
// program is the queue is empty.
int QueueInt::dequeue()
{
  int val = front();
  queueObj.pop();
  return val;
}

// Returns but does not remove the integer at the front of the queue. Aborts the
// program is the queue is empty.
int QueueInt::front() const
{
  if (isEmpty()) {
    cerr << "Tried to access empty queue --> aborting program" << endl;
    exit(-1);
  }

  return queueObj.front();
}

// Returns true if the queue is empty.
bool QueueInt::isEmpty() const
{
  return queueObj.empty();
}
