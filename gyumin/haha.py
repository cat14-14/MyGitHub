from flask import *

server = Flask(__name__)

@server.route("/")
def main():
    return "긴은호"

server.run(host="0.0.0.0", port=5000, debug=True)