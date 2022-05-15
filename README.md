# burgerproject
## title: burger 관리 프로그램


### 1. mini project 주제<br>
내 손안에서 언제든 버거를 만들고, 수정하고, 보고, 지울 수 있다면 얼마나 좋을까요 ?<br>
내 손안의 버거킹 ! 서비스,  
**햄버거 crud 프로그램**  입니다.

___

### 2. mini project에 대한 소개<br>  
버거킹에 있는 메뉴를 관리하는 project   
+ 햄버거의 메뉴를 crud기능,save file ,load file 등의 기능을 이용하여     
**프로그램 관리자**가 메뉴의 수정 사항이 발생할 시 데이터를 관리할 수 있도록 하고,  
+ 검색 기능을 추가하여,  
**햄버거 구매를 원하는 사용자**가 햄버거를 쉽게 찾을 수 있도록 합니다.  

___

### 3. image <br>
 ![burger](https://user-images.githubusercontent.com/48049882/166153412-6b89246b-c449-4f38-b82e-894a4db9d244.jpg)

특정 메뉴를 검색하여 찾을 수 있는 프로그램 제작

___
### 4. mini project가 가지고 있는 기능 <br>  
버거킹에 있는 메뉴 관리하는 프로그램  
#### * createBurger()  
  <img src ="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/create_image.png?raw=true"></img>
  새로운 버거 생성
  버거의 이름, 가격과 빵,패티, 소스의 종류를 추가할 수 있습니다.  
  2번을 눌러 createBurger를 실행합니다.  
#### * readBurger()  
  <img src ="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/read_image.png?raw=true"></img>
  버거 정보 읽어들임. 
  특정 햄버거의 정보를 읽어들이는 기능입니다.  
  버거의 이름과 가격을 출력한 뒤, 사용자가 생성한 빵,패티,소스의 종류를 햄버거 모양으로 직관적으로 표시합니다. 
  1번을 누르면 listBurger가 readBurger를 실행합니다.     
#### * updateBurger()  
  <img src ="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/update_image.png?raw=true"></img> 
  버거 정보 수정(이름, 가격, 빵 종류, 패티 종류, 소스 종류). 
  사용자가 자신이 원하는 대로 버거의 정보를 수정할 수 있습니다!  
  3번을 누르면 updateBurger를 실행합니다.  
#### * deleteBurger()  
  <img src ="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/delete_image.png?raw=true"></img>
   버거 삭제
   사용자가 원하는 버거를 삭제합니다.  
   버거의 번호를 선택하고 선택하는 명령어 1을 누르면 버거가 삭제됩니다.  
   4번을 누르면 deleteBurger를 실행합니다.  
#### * saveData()  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/sava_data1.jpeg?raw=true"></img>.  
  5번으로 데이터 저장
  <img scr="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/save_data.jpeg?raw=true"></img>.  
  로딩하여 saveData 작동 확인  
  버거 내역 burger.txt 파일에 저장  
  버거의 이름, 가격, 빵의 종류, 패티의 종류, 소스의 종류를 텍스트 파일에 저장합니다.  
  main함수에 저장되어 있던 데이터를 burger.txt 파일에 저장합니다.  
  5번을 누르면 saveData를 실행합니다.  
#### * loadData()   
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/sava_data1.jpeg?raw=true"></img>.  
  burger.txt 파일에서 데이터 load 하여 loadData 확인  
  burger.txt 파일에서 버거 정보 로딩  
  프로그램이 처음 시작될 때 자동으로 텍스트 파일에 저장된 버거의 정보를 로딩합니다.  
  burger.txt에 저장되어 있는 데이터를 로딩하여 버거의 정보를 불러옵니다.  
  프로그램이 시작되면 자동으로 실행되며, burger.txt 파일이 없는 경우 "파일 없음" 메시지를 출력합니다.  
#### * listBurger()  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/read_image.png?raw=true"></img>.  
  1번 실행하여 listBurger 확인  
  버거 list-up 
  listBurger method를 실행하면 버거 하나하나의 정보를 표시하는 readBurger를 실행하여, 버거의 종류를 확인합니다.  
  1번을 누르면 listBurger를 실행합니다.  
#### * searchName()  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/search_name.jpeg?raw=true"></img>.  
  6번 실행하여 searchName 확인  
  이름으로 버거 검색  
  원하는 버거의 이름으로 버거를 검색하는 기능입니다.  
  사용자가 입력한 단어가 포함되는 버거를 모두 보여줍니다.  
  6번을 누르면 searchName을 실행합니다.  
#### * searchPrice() <br>  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/search_price.jpeg?raw=true"></img>.   
  7번 실행하여 searchPrice 확인   
  가격으로 버거 검색--> 특정 범위 내 버거 검색  
  사용자가 버거를 가격으로 검색하기를 원하는 경우, 지불 가능한 최소 금액과 최대 금액을 검색하여 해당 범위에 포함되는 버거만 출력합니다.   
  7번을 누르면 searchPrice를 실행합니다.  
#### * searchBurger() <br>  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/search_burger.jpeg?raw=true"></img>.  
  8번 실행하여 searchBurger 확인  
  재료, 가격, 빵 종류 선택하여 버거 검색 가능  
  사용자가 버거에 포함된 재료를 이용하여 버거를 검색할 수 있습니다.   
  8번을 누르면 searchBurger를 실행합니다.   
#### * selectMenu() <br>  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/select_menu.jpeg?raw=true"></img>.  
  selectMenu 실행화면  
  crud, 검색, 저장 함수등 수행할 기능을 선택   
  사용자가 자신이 원하는 기능을 선택하여 실행할 수 있습니다.  
  단, 0을 누르면 프로그램이 종료됩니다!!  
#### * burgerKing() <br>  
  <img src="https://github.com/ossproject2022/burgerproject/blob/main/screenshots/search_burger.jpeg?raw=true"></img>.   
  9번 실행하여 burgerKing 확인  
  burgerking.txt에 있는 파일을 읽어들여서 버거킹에 실제로 존재하는 버거의 정보를 확인할 수 있습니다.  
  단, burgerKing메뉴는 사용자가 실행하는 데이터와 관련 없이 독립적으로 작동합니다.  
  9번을 누르면 burgerKing 메뉴를 실행하여 여러가지 버거의 정보를 확인할 수 있습니다.  
___
### 5. 개발 환경 및 언어<br>  
 Linux, c 언어  
___
### 6. 팀 소개 및 팀원이 맡은 역할<br>  
 #### 이산하 ####  
학번 :  21801047  
전공 :  컴퓨터 공학과   
역할 :    
1. 프로그램 관리자  
2. contributor로부터 pr 받아서 정보 수정
3. **wiki** 내용 구성
4. updateBurger, deleteBurger, loadData, searchPrice, burgerKing 함수 관리
       
 #### 김민상 ####
학번 :  21900094  
전공 :  컴퓨터 공학과   
역할 :  
1. contributor   
2. remote repository 정보 수정하여 pr 보내기  
3. **"README.md"** 파일 관리  
4. createBurger, readBurger, saveData, searchName, searchBurger 함수 관리    
