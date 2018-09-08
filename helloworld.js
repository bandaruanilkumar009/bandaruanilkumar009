function sayHello(language) {
	var arrHellos = {
		"Chinese" : "你好世界",
		"Dutch" : "Hallo wereld",
		"English" : "Hello world",
		"French" : "Bonjour monde",
		"German" : "Hallo Welt",
		"Greek" : "γειά σου κόσμος",
		"Italian" : "Ciao mondo",
		"Japanese" : "こんにちは世界",
		"Korean" : "여보세요 세계",
		"Portuguese" : "Olá mundo",
		"Russian" : "Здравствулте мир",
		"Spanish" : "Hola mundo"
	};
	alert(arrHellos[language]);
}
console.log(sayHello);