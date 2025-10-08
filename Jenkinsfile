pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                bat 'rm -r build'
                bat 'mkdir build'
                bat 'cd build'
                bat 'cmake -S.. -B.'
                bat 'cmake --build .'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}